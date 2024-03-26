#include <iostream>
using namespace std;

int update1(int n){
    n++;
}

int update2(int& n){
    n++;
}

int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}

int main(){
    int a = 5;
    cout <<"Before : "<<a<<endl;
  //  a++;
    update1(a);
    cout<<"After : "<<a<<endl;
    
    update2(a);
    cout<<"After2 : "<<a<<endl;

    int &b = a;
    cout <<b<<endl;
    b++;
    cout<<a<<endl;
   // cout<<&b<<endl;

    func(a);
}