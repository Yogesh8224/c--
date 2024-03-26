/*

class Solution{
    public : 
      void heapify (int arr[],int n,int i){
        int largest = i;
        int left = 2*i;
        int right = 2*1 + 1;

        if(left <= n && arr[largest] < arr[left])
            largest = left;
        
        if(right <= n && arr[largest] < arr[right])
            largest = right;

        if(largest != i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
      }

      vector<int> mergeHeaps(vector<int> &a,vector <int> &b,int n,int m){
         vector<int> ans;

         for(int i = 0 ; i < n ; i++){
            ans.push_back(a[i]);
         }

         for(int i = 0; i < m ; i++){
            ans.push_back(b[i]);
         }

         int size = ans.size();
         for(int i = size/2-1; i>=0;i--){
            heapify(ans,size,i);
         }

         return ans;
      }

}:


*/