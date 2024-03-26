#include <iostream>
#include <string>
#include <thread>
#include <boost/asio.hpp>

using namespace boost::asio;
using ip::tcp;
using std::cout;
using std::endl;

class ChatServer {
public:
    ChatServer(io_service& ioService, short port)
        : acceptor_(ioService, tcp::endpoint(tcp::v4(), port)),
          socket_(ioService) {
        acceptConnection();
    }

private:
    void acceptConnection() {
        acceptor_.async_accept(socket_, [this](boost::system::error_code ec) {
            if (!ec) {
                cout << "New connection established." << endl;
                std::make_shared<ChatSession>(std::move(socket_), messages_)->start();
            }

            acceptConnection();
        });
    }

    tcp::acceptor acceptor_;
    tcp::socket socket_;
    std::vector<std::string> messages_;
};

class ChatSession : public std::enable_shared_from_this<ChatSession> {
public:
    ChatSession(tcp::socket socket, std::vector<std::string>& messages)
        : socket_(std::move(socket)), messages_(messages) {}

    void start() {
        readMessage();
    }

private:
    void readMessage() {
        auto self(shared_from_this());
        async_read_until(socket_, buffer_, '\n', [this, self](boost::system::error_code ec, std::size_t length) {
            if (!ec) {
                std::istream is(&buffer_);
                std::string message;
                std::getline(is, message);

                if (message == "/exit") {
                    cout << "Client disconnected." << endl;
                    return;
                }

                messages_.emplace_back(message);
                broadcastMessage(message);

                readMessage();
            }
        });
    }

    void broadcastMessage(const std::string& message) {
        for (auto& msg : messages_) {
            async_write(socket_, buffer(message + "\n"), [](boost::system::error_code, std::size_t) {});
        }
    }

    tcp::socket socket_;
    streambuf buffer_;
    std::vector<std::string>& messages_;
};

int main() {
    try {
        io_service ioService;
        ChatServer server(ioService, 8888);
        ioService.run();
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
