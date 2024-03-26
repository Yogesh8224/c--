#include <iostream>
using namespace std ;

int counting(int arr[],int size, int start = 0){
    for(int i = 0 ; i < size ; i++){
        start += arr[i];
        
    }
    return start;
}
int main(){
    int arr[] = {1,2,4,5,6};
    int a = sizeof(arr)/sizeof(int);

    cout<<counting(arr,a)<<endl;

    cout<<counting(arr,a,2);
}