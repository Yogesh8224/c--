#include <iostream>
using namespace std ;

bool findKey(int arr[],int size,int key){
    for(int i = 0 ; i < size ; i++){
        if(arr[i]== key){
            return 1;
        }
        else{
            return 0;
        }
    }     
}

int main(){
    int arr[] = {2,5,6,-5,1,9,-3};
    int arrSize = sizeof(arr)/sizeof(int);

    int key ;
    cout<<"Enter key for found : ";
    cin>>key;
    if(  findKey(arr,arrSize,key)){
        cout<<"Key is found. ";
    }
    else {
        cout<<"Key is not found.";
    }

}