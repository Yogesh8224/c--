#include <iostream>
using namespace std ;

int power(int n){
    // base condition 
    if (n == 0){
        return 1;
    }
       
    // recursive relation    
    return 2 * power(n-1);

}

int main(){
    int n ;
    cout << "Enter a number for find the power of 2 : ";
    cin>>n;

    int a = power(n);
    cout<<endl;
    cout<<a;
}