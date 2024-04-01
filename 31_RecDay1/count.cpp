#include <iostream>
using namespace std ;

int counting(int n){
   // base case 
   if (n==0)
      return 1 ;

    // recurcive relation
    counting(n -1);
     cout<<n<<endl;
    

}

int main(){
    int n ;
    cout<<"Enter a number for counting : ";
    cin >> n;
    counting(n);
}