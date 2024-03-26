/*
@brute solution 
bool searchInBst(BinaryTreeNode *root,int x){
     if(root == NULL){
        return false;
     }

     if (root->data == x){
        return true;
     }

     if(x < root -> data){
        searchInBst(root->left,x);
     }
     else{
        searchInBst(root->right,x);
     }

 }




@optimal Solution 
bool searchInBst(BinaryTreeNode *root,int x){

    BinaryTreeNode<int> *temp = root;

    while(temp != NULL){
        if(temp -> data == x)
           return true;

        if(temp -> data > x)
             temp = temp -> left;
        else
            temp = temp -> right;     

    }
    return false;
}

*/