// /****************************************************************
//     Following is the Linked List node structure

//     class Node
//     {
//     public:
//         int data;
//         Node *next;
//         Node(int data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// *****************************************************************/


// Node* kReverse(Node* head, int k) {
//     //base call
//     if(head == NULL) {
//         return NULL;
//     }
    
//     //step1: reverse first k nodes
//     Node* next = NULL;
//     Node* curr = head;
//     Node* prev = NULL;
//     int count= 0;
    
//     while( curr != NULL && count < k ) {
//         next = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }
    
//     //step2: Recursion dekhlega aage ka 
//     if(next != NULL) {
//         head -> next = kReverse(next,k);
//     }
    
//     //step3: return head of reversed list
//     return prev;
// }    //empty list
    

//     bool isCircularList(Node* head) {
//     //empty list
//     if(head == NULL) {
//         return true;
//     }

//     Node* temp = head -> next;
//     while(temp != NULL && temp != head ) {
//         temp = temp -> next;
//     }

//     if(temp == head ) {
//         return true;
//     }

//     return false;

// }