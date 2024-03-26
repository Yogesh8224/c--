#include <iostream>
using namespace std;

class Heap{
  public : 
    int arr[100];
    int size ;

    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        // Insert an element 
        size = size + 1;
        int index = size;
        arr[index] = val;

        // check whether parent is greater than or not if not then swap there places
        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deleteFromHeap(){
        if(size == 0){
            cout << "Nothing in the heap" <<endl;
        }
        
        // step 1 : put last element into first index
        arr[1] = arr[size];

        // Step 2 : Remove last element.
        size--;

        // Step 3 :  take root node to its correct postion 
        int i = 1;
        while(i < size){
            int leftIndex = 2 * i ;
            int rightIndex = 2 * i + 1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
            }
            else {
                return ;
            }
        }

    }

    void print(){
        for(int i = 1; i <= size ; i++){
            cout << arr[i]<<" ";
        }
        cout << endl;
    }
};


    void Heapify(int arr[],int n,int i){ // n = 5 , i = 2, n/2
        int largest = i; // i = 2
        int left = 2*i;  // left = 4
        int right = 2*i + 1;  // right = 5

        if(left <= n && arr[largest] <= arr[left]){  // left = 4 , arr[2] < arr[4]
            largest = left;  // largest = 4
        }

        if (right <= n && arr[largest] <= arr[right]){ // right = 5 , arr[2] < arr[5]
            largest = right; // largest = 5
        }

        if(largest != i){  // 2 != i it is true when upper either conditions are true
            swap(arr[largest],arr[i]); // swap arr[largest],arr[n/2]
            Heapify(arr,n,largest); // n = 5, variable value
        }
    }

    void HeapSort(int arr[],int n){
        int size = n;

        while(size>1){
            // step 1 : Swap
            swap(arr[size],arr[1]);
            size--;

            // step 2 
            Heapify(arr,size,1);

        }

    }


int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();
    
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i = n/2 ; i > 0 ; i--){
        Heapify(arr,n,i);
    }
    cout << "Printing the array now : "<<endl;
    for(int i = 1; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}