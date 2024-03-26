#include <iostream>
using namespace std ;

int reversecounting(int n){
   // base case 
   if (n==0)
      return 1 ;

    // recurcive relation
    cout<<n<<endl;
    reversecounting(n -1);
}

int main(){
    int n ;
    cout<<"Enter a number for reverse counting : ";
    cin >> n;
    reversecounting(n);
}