#include <iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size == 1){
        return true;
    }

    if(arr[0]>arr[1]){
         return false;
    }
    else{
        return isSorted(arr+1,size-1);
    }
}

// void print(int arr[], int s, int e) {

//     for(int i=s; i<=e; i++) {
//         cout << arr[i] << " ";
//     } cout << endl;
// }


bool binarySearch(int *arr,int s,int e,int key){

    // base case
    if(s > e){
        return false;
    }
    
   // int mid = (s+e)/2;
    int mid = s + (e-s)/2;
    if (key == arr[mid]){
        return true;
    }

    if (arr[mid] < key){
       return binarySearch(arr,mid +1,e,key);
    }
    else{
       return binarySearch(arr,s,mid-1,key);
    }
}

int main()
{
    int arr[]= {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int key = 5;
    
    bool a = isSorted(arr,size);
  

    if(a){
        bool b = binarySearch(arr,0,size,key);
        if(b){
            cout<<"Array is sorted so binary search Perform."<<endl;
            cout <<"Found.";
        }
        else{
            cout<<"Not found";
        }
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }


} 
