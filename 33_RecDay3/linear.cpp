// #include <iostream>
// using namespace std ;

// void print(int arr[],int size){
//     cout <<"Size of array : "<<size<<endl;
//     for(int i = 0; i < size;i++){
//        // cout <<"Recursion is at "<<i<<" call"<<endl;
//         cout<<arr[i]<<" "<<endl;
//     }
// }

// bool LinearSearch(int arr[],int size ,int key){
//     // base case
//     print(arr,size);
//     if(size==0){
//         return false;
//     }

//     if (arr[0] == key){
//         return true;
//     }
//     else{
//         return LinearSearch(arr+1,size-1,key);
//     }
// }
// int main(){
//     int arr[] = {1,5,9,6,3,7,56,2};
//     int size = sizeof(arr)/sizeof(int);
//     int key = 4;

//     bool a = LinearSearch(arr,size,key);
//     if(a){
//         cout<<endl;
//         cout<<"Present."<<endl;
//     }
//     else{
//         cout<<"Not present."<<endl;
//     }

// }

#include <iostream>
using namespace std;
void print(int arr[],int size){
    cout<<"size of array : "<<size<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}

bool LinearSearch(int arr[],int size,int key){
    print(arr,size);
    // base case
    if(size==0){
        return false;
    }

    // recursive relation call 
    if(arr[0] == key){
        return true;
    }
    else{
        return LinearSearch(arr+1,size-1,key);
    }
}
int main(){
    int arr[] = {1,5,6,7,9,3,4,12};
    int size = sizeof(arr)/sizeof(int);
    int key = 0;

    bool check = LinearSearch(arr,size,key);
    
}