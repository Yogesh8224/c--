#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtPosition(Node *&tail, int element, int d)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void print(Node *tail)
{

    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

void deleteNode(Node *&tail, int value)
{

    if (tail == NULL)
    {
        cout << "List is empty , please check again." << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        if (curr == prev)
        {
            tail = NULL;
        }

        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *tail = NULL;

    insertAtPosition(tail, 1, 5);
    print(tail);

    insertAtPosition(tail, 5, 8);
    print(tail);

    insertAtPosition(tail, 8, 9);
    print(tail);

    insertAtPosition(tail, 9, 11);
    print(tail);

    insertAtPosition(tail, 11, 9);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    return 0;
}