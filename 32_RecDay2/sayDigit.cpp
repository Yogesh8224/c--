#include <iostream>
using namespace std ;

void sayDigit(int n,string arr[]){
    if(n==0)
       return ;

    int digit = n % 10;
    n = n / 10;   

    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter no for SayDigit : "<<endl;
    cin >> n;

    sayDigit(n, arr);
    
}