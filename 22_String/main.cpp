#include <iostream>
using namespace std ;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch + 'A' + 'a';
    }
    return ch;
}

bool checkPalindrome(char a[],int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
}

void reverse(char name[],int n){
    int s = 0;
    int e = n - 1;

    while (s<=e)
    {
       swap(name[s++],name[e--]);
    }
    
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++){
         count++;
    }
    return count;
}

int main(){
    char name [10];
  //  string name;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Name : "<<name << endl;
    cout << "length of the array is : "<<getlength(name)<<endl;
    reverse(name,getlength(name));
    cout<<"Reverse Name : "<<name<<endl;
    cout<<"Palindromme or not : "<< checkPalindrome(name,getlength(name));

    return 0;
}