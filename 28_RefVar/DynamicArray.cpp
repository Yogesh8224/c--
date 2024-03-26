#include <iostream>
using namespace std;

int getSum(int arr[],int size){
    int sum = 0;
    for(int i = 0 ; i < size ; i ++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0;i <n ; i++){
        cin >> arr[i];
    }

    // for(int i = 0;i <n ; i++){
    //     cout << arr[i]<<" ";
    // }

    int ans = getSum(arr,n);
    cout<<"Answer is : "<<ans <<endl;

    delete(arr);

  //  Error
  //  cout<<"Answer is : "<<ans<endl;

    // while(true){
    //     int i = 5;
    // }

    // while(true){
    //     int *ptr = new int;
    //     delete(ptr);
    // }

    return 0;
}