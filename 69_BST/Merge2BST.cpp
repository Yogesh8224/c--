/*

step 1 : Convert into inorder
 
void inorder(TreeNode<int>* root,vector<int>& in){
    if(root == NULL)
       return;

    inorder(root -> left , in);
    in.push_back(root -> data);
    inorder(root -> right , in);
}

Step 2 : Merge Two Sorted Array

void mergeArrays(vector <int> a,vector <int> b){
    vector<int> ans(a.size() + b.size());

    int i = 0,j = 0;
    int k = 0;

    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            ans[k] = a[i];
            k++;
            i++;
        }
        else{
            ans[k] = b[j];
            k++;
            j++;
        }
    }

    while(i < a.size()){
       ans[k++] = a[i];
       i++;
    }

    while(j < b.size()){
        ans[k++] = b[j];
        j++;
    }
}

Step 3 : Convert inorder to BST

TreeNode<int>* inorderToBst(int s , int e , vector<int> &in){
    if(s>e)
      return NULL;

    int mid = s+e / 2;
    TreeNode<int>* root = new TreeNode<int>*(in[mid]);
    root -> left = inorderToBst(s,mid-1,in);
    root -> right = inorderToBst(mid+1,e,in);
    return root;
}

TreeNode<int>* mergeBst(TreeNode<int>* root1,TreeNode<int>* root2){
    vector <int> bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);

    vector<int> mergeArrays = mergeArray(bst1,bst2);

    return inorderToBst(0,mergeArray.size()-1,mergeArray);
}


APPROACH 2 OPTIMAL CODE

void convertIntoSortedDLL(TreeNode<int>* root , TreeNode<int>* head){
    if(root == NULL)
       return NULL;

    convertIntoSortedDLL(root -> right,head);

    root -> right = head;
    if(head != NULL)
       head -> left = root;

    head = root;

    convertIntoSortedDLL(root -> left ,head);   

}

TreeNode<int>* mergeBst(TreeNode<int>* root1,TreeNode<int>* root2){
     TreeNode<int>* head = NULL;
     TreeNode<int>* tail = NULL;

     while(head1 != NULL && head2 != NULL){
        if(head1 -> data < head -> data){
            if(head == NULL){
                head = head1;
                tail = head1;
                head1 = head -> right;
            }
            else{
               tail -> right = head1;
               head -> left = tail;
               tail = head1;
               head1 = head1 -> right;
            }
        }
        else{
            if(head == NULL){
                head = head2;
                tail = head2;
                head2 = head -> right;
            }
            else{
                
               tail -> right = head2;
               head -> left = tail;
               tail = head2;
               head2 = head2 -> right;

            }
        }

        while(head1 != NULL){
               tail -> right = head1;
               head -> left = tail;
               tail = head1;
               head1 = head1 -> right;
        }

        while(head2 != NULL){
               tail -> right = head2;
               head -> left = tail;
               tail = head2;
               head2 = head2 -> right;
        }
        return head;
     }
}

int countNode(TreeNode<int>* head){
    int count = 0;
    while(head != NULL){
         count ++;
        head=head-> next;
     
    }
    return count;
}

TreeNode<int>* SortedLLToBST(TreeNode<int>* &head,int n){
    
    if(n<=0 || head == NULL){
        return NULL;
    }

    TreeNode<int>* left = sortedLLToBST(head,n/2);

    TreeNode<int>* root = head;

    head = head -> next ;
    root -> right = sortedLLToBST(head,n-n/2-1);
    return root;
    


}
*/