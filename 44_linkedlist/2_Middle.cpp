
// APPROACH 1

//    if (head == NULL || head -> next == NULL){
//         return head;
//     }

//     if (head -> next -> next){
//         return head -> next;
//     }
    
//     Node* slow = head;
//     Node* fast = head -> next;

//     while(fast != NULL){
//         fast = fast -> next ;
//         if(fast != NULL){
//             fast = fast -> next;
//         }

//         slow = slow -> next;

//     }
//     return slow;



//  APPROACH 2

//     int getlength(Node* head){
//     int len = 0;
//     while(head != NULL){
//         len++;
//         head = head -> next;
//     }
//     return len;
// }

// Node *findMiddle(Node *head) {
//     // Write your code here
//     int len = getlength(head);
//     int ans = len/2;

//     int cnt = 0;
//     Node* temp = head;
//     while(cnt < ans){
//         temp = temp -> next;
//         cnt++;
//     }
//     return temp;
// }