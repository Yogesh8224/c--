#include <iostream>
using namespace std;
int main(){
    int a = 2;
    cout<<a<<endl;

    cout<<"Address of a is "<<&a;

    int *ptr = &a;

    // Print value 
    cout<<"Value of a is "<<*ptr<<endl;  

    // Address of a
    cout<< "Address of a is "<<&a <<endl;

    double d = 4.3;
    double *p2 = &d;

    
    // Print value 
    cout<<"Value of a is "<<*p2<<endl;  

    // Address of d
    cout<< "Address of a is "<<&d <<endl;


    cout << " size of integer is " << sizeof(a) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;

    int num = 5;
   int b = num;
   cout << "b before " << num << endl;
   b++;
   cout << "b after " << num << endl;


   int *p  = &num;
   cout << "before " << num << endl;
   (*p)++;
   cout << "after " << num << endl;

    //copying a pointer
   int *q = p;
   cout << p <<" - " << q << endl;
   cout << *p <<" - " << *q << endl;

   //important concept
   int i = 3;
   int *t = &i;
   //cout <<  (*t)++ << endl;
   *t = *t +1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;

}