#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <mutex>
#include <vector>
#include <map>

std::map<std::string, std::mutex> userMutexes;

void handleClient(const std::string& username) {
    std::string filename = username + "_chat.txt";
    std::ifstream inFile(filename);
    
    if (!inFile.is_open()) {
        std::ofstream outFile(filename);
        outFile.close();
    }

    while (true) {
        std::string message;
        std::getline(std::cin, message);

        std::lock_guard<std::mutex> lock(userMutexes[username]);

        std::ofstream outFile(filename, std::ios::app);
        if (outFile.is_open()) {
            outFile << "Server: " << message << std::endl;
            outFile.close();
        } else {
            std::cerr << "Unable to open file for writing.\n";
        }
    }
}

int main() {
    std::cout << "Server is running...\n";

    std::vector<std::thread> threads;

    while (true) {
        std::string username;
        std::cin >> username;

        if (username == "/exit") {
            break;
        }

        threads.emplace_back(handleClient, username);
    }

    for (auto& thread : threads) {
        thread.join();
    }

    std::cout << "Server is shutting down.\n";

    return 0;
}
