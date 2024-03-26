#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&head,Node* &tail, int position, int d)
{

    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position,Node* &head){
    if (position == 1){
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
}
   else{
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while (cnt < position){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }

    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
   }
}

int main()
{
    Node *node1 = new Node(10);
    //   cout << node1 -> data <<endl;
    //   cout<<node1 ->next <<endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);

    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 15);
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtPosition(head,tail, 4, 1);
    print(head);

    deleteNode(2,head);
    print(head);


    //  Node* head = node1;
}