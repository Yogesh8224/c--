#include <iostream>
#include <queue>
using namespace std ;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
       this->data = d;
       this->left= NULL;
       this->right= NULL;
    }
};

void inorder(Node* root){
    if(root == NULL)
        return ;
    

    inorder(root->left);
    cout << root -> data << " ";
    inorder(root->right);
    
}

void preorder(Node* root){
    if(root == NULL){
        return ;
    }

    cout<<root-> data <<" ";
    preorder(root -> left);
    preorder(root->right);
    
}

void postorder(Node* root){
    if(root == NULL){
        return ;
    }

    postorder(root -> left);
    postorder(root-> right);
    cout << root -> data << " ";
}

void levelorderTraversal(Node* root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
       Node* temp = q.front();
       q.pop();

       if(temp == NULL){
        cout <<endl;

           if(!q.empty()){
               q.push(NULL);
           }
       }
       else{
           cout << temp -> data <<" ";
            
            if(temp -> left){
                q.push(temp->left);
            }

            if(temp -> right){
                q.push(temp->right);
            }
       }
    }
}

// void levelorderTraversal(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         if(temp == NULL){
//             cout <<endl;

//             if(!q.empty()){
//                 q.push(NULL);
//             }

//         }
//         else{
//             cout <<temp-> data<<" ";

//             if(temp->left){
//                 q.push(temp->left);
//             }

//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }

// }

Node* insertToBST(Node* root,int d){
    // base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d> root->data){
       // right part me insert karna hai
       root -> right = insertToBST(root->right,d);
    }
    else{
        // left part me insert karna hai
        root -> left = insertToBST(root -> left,d);
    }


}

Node* minValue(Node* root){
    Node* temp = root;
    
    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

Node* MaxValue(Node* root){
    Node* temp = root;

    while(temp -> right != NULL){
        temp = temp -> right;
    }

    return temp;
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertToBST(root,data);
        cin >> data;
    }
}

Node* deleteFromBst(Node* root,int val){
    // base case
    if(root == NULL)
       return root;

    // 0 child
    if(root -> data == val){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
    }
 

    // 1 child
    if(root -> left != NULL && root -> right == NULL){
        Node* temp = root -> left;
        delete root;
        return temp;
    }
    if(root -> left== NULL && root -> right != NULL){
        Node* temp = root -> right;
        delete root;
        return temp;
    }

    // 2 child

    if(root -> left != NULL && root -> right != NULL){
        int mini = minValue(root -> right) -> data;
        root ->data = mini;
        root -> right = deleteFromBst(root->right,mini);
        return root;
    }
    else if(root -> data > val){
        root -> left = deleteFromBst(root->left,val);
        return root;
    }
    else{
        root -> right = deleteFromBst(root -> right,val);
        return root;
    }

}

int main(){
    
    Node* root = NULL;
    cout <<"Enter data to create BST : "<<endl;
    takeInput(root);

    cout << "Printing the Bst : "<<endl;
    levelorderTraversal(root);

    cout <<"Printing in Inorder : "<<endl;
    inorder(root);
    cout << endl;
    
    
    cout <<"Printing in postorder : "<<endl;
    postorder(root);
    cout << endl;

    
    cout <<"Printing in preorder : "<<endl;
    preorder(root);
    cout << endl;

    cout << "Print Minimum Value : "<<endl;
    cout <<minValue(root)->data;
    cout <<endl;

    cout<<"Print Maximum Value : "<<endl;
    cout <<  MaxValue(root)->data;

    return 0;
}

//  10 8 21 7 27 5 4 3 -1