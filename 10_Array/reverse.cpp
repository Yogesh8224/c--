#include <iostream>
#include <vector>
using namespace std ;

void reverse(int name[],int n){
    int s = 0;
    int e = n - 1;

    while (s<=e)
    {
       swap(name[s++],name[e--]);
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<"Elements of array : ";
    for(int i = 0 ; i < 9 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr,9);
  
    cout<<"Elements of reverse array : ";
    for(int i = 0 ; i < 9 ; i++){
        cout<<arr[i]<<" ";
    }

}