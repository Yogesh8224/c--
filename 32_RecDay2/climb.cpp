#include <iostream>
using namespace std ;

int countDistinctWayToClimbStair(long long nStairs)
{
    //base case
    if(nStairs < 0)
        return 0;
    
    if(nStairs == 0)
        return 1;
    
    //R.C
    int ans = countDistinctWayToClimbStair(nStairs-1) 
        + countDistinctWayToClimbStair(nStairs-2);
    
    return ans;
}

int climbStair(int n){
    if (n<=0)
      return 0;

    if (n==1)
      return 1;


    int count = climbStair(n-1) + climbStair(n-2);
    return count;    
}
int main(){
    int n ;
    cout << "Enter a number for count climb stairs : "<<endl;
    cin >> n;
    // int a =  climbStair(n);
    // cout << a <<endl;
  int a =   countDistinctWayToClimbStair(n);
  cout << a<<endl;
}