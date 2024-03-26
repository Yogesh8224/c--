#include <iostream>
using namespace std ;
int main(){
    int arr[] = {1,2,3,4,5};

    int *ptr = &arr[0];

    cout<<"Address arr : "<<arr<<endl;
    cout <<"Address &arr : "<<&arr<<endl;
    cout<<"*Value arr : "<<*arr<<endl;
    cout<<"Value *ptr : "<<*ptr<<endl;
    cout<<"Address &arr[0] : "<<&arr[0]<<endl;
    cout<<"Address &arr[0]+1 : "<<&arr[0]+1<<endl;
    cout<<"Address &arr[0]+2 : "<<&arr[0]+2<<endl;
    cout<<"Address &arr[2] : "<<&arr[2]<<endl;
    cout<<"Address &arr[1] : "<<&arr[1]<<endl;
    cout<<"Address ptr : "<<ptr<<endl;

    cout<<sizeof(&arr[0])<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(*arr)<<endl;

   int temp[10] = {1,2};
   cout << sizeof(temp) << endl;
   cout << " 1st " <<  sizeof(*temp) << endl;
   cout << " 2nd " <<  sizeof(&temp) << endl;

   int *pt = &temp[0];
   cout << sizeof(pt) << endl ;
   cout << sizeof(*pt) << endl ;
   cout << sizeof(&pt) << endl ;

    int arr1[10];

//ERROR
   //arr = arr+1;

    int *ptr1 = &arr1[0];
    cout << ptr1 << endl;
    ptr1 = ptr1 + 1;
    cout << ptr1 << endl;


}