#include <iostream>
using namespace std;

bool palindromecheck(string str , int s ,int e){
     if(s>e){
        return true;
     }

     if (str[s]!=str[e]){
        return false;
     }
     else{
       return palindromecheck(str,s+1,e-1);
     }
}

    bool isPalindrome(int x) {
        string str1 = to_string(x);
        int s = 0;
        int e = str1.length() - 1;

        while(s<=e){
           swap(str1[s],str1[e]);
           s++;
           e--;
        }
        string str2 = to_string(x);
        return (str1 == str2);
    }

int main(){
    string name = "pope";
    bool a = palindromecheck(name , 0 , name.length()-1);
    if(a){
        cout<<"Palindrome."<<endl;
    }
    else{
        cout<<"Not Palindrome.";
    }
}