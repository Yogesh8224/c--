#include <iostream>
#include <array>

using namespace std ;
int main(){
    int arr[3] = {1,2,3};
    array<int,4> a = {1,2,3,4};
    int n = a.size();

    for(int i = 0 ; i < n;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at index 2 : "<<a.at(2)<<endl;

    cout <<"Empty or not : "<<a.empty()<<endl;
    
    cout<<"Front element : "<<a.front()<<endl;

    cout<< "Last element : "<<a.back()<<endl;
}