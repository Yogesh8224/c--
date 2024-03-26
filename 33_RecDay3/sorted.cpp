// #include <iostream>
// using namespace std ;

// bool isSorted(int arr[],int size){
//     if (size==0 || size == 1)
//         return true;


//     if (arr[0] > arr[1]){
//          return false;
//     }
//     else{
//        return isSorted(arr+1,size-1);
//     }
// }

// int main(){
//    int arr[] = {3,5,1,6,3,6};
//    int size = sizeof(arr)/sizeof(int);
//    bool Sorted = isSorted(arr,size);
//    if(Sorted){
//       cout << "Array is sorted."<<endl;
//    }
//    else{
//       cout<<"Array is not sorted.";
//    }
// }

#include <iostream>
using namespace std ;

bool isSorted(int arr[],int size){
    if (size == 0 || size == 1){
        return true;
    }

    if (arr[0] > arr[1]){
        return false;
    }
    else{
       return isSorted(arr+1,size-1);
     
    }
}

int main(){
    int arr[] = {3,5,1,7,9,3};
    int size = sizeof(arr)/sizeof(int);
    bool sorted = isSorted(arr,size);

    if(sorted){
        cout <<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted.";
    }
}