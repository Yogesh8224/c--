#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;

    // insert elements
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);

    // Print all elements
    for(int i = 0 ; i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    // delete last element
    arr.pop_back();

}