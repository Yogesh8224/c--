#include <iostream>
using namespace std ;
int main(){
    char ch[6] = "abcde";
    int arr[5] = {1,2,3,4,5};

    char *ptr = &ch[0];

    cout<<"Address arr : "<<arr<<endl;
    // attention here
    cout <<"Value ch : "<<ch<<endl;

    cout<<*ptr<<endl;
    cout<<&ch[0]<<endl;

    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
}