#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,7,6,5,4};
    // cout<<endl<<"Value at first index : "<<arr[0]<<endl;
    
    // length of array
    int arrSize = sizeof(arr)/sizeof(int);
    // cout<<"Size of array : "<<arrSize<<endl;

    // char ch[] = "asfgh";
    // int chSize = sizeof(ch)/sizeof(char);

    // cout<<"Value at fourth index of char : "<<ch[4]<<endl;
    // cout<<"Size of character array : "<<chSize<<endl;

    // Printing array
    // cout<<"Elements of Array : ";
    // for(int i = 0; i < arrSize;i++){
    //     cout <<arr[i]<<" ";
    // }
    // cout<<endl;
 
    // Linear search
    int key ;
    cout <<"Enter key for find in the array : "<<endl;
    cin>>key;

    for(int i = 0 ;i<arrSize;i++ ){
        if(arr[i]== key){
            cout<<"Key is found "<<arr[i]<<" at index "<< i<<endl;
            break;
        }
        else{
            cout <<"Key is not found ."<<endl;
            break;
        }
    }


    

}