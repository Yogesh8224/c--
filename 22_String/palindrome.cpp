/*
 
 bool isValid(char ch){
    if(ch >= 'a' && ch <= 'z' ||ch >= 'A' && ch <= 'Z'||ch >= '0' && ch <= '9'  ){
        return true ;
    }
    return false;
 }

 
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string str){
    int s = 0;
    int e = str.length() - 1;

    while(s<=e){
        if(str[s] != str[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}


 }
 bool isPalindrome(string s){

    // step 1 => Faltu character ko hatana hai
    string temp = "";

    for(int j = 0 ; j < str.length ; j++){
        if(isValid(str[i])){
            temp.push_back(str[i]);
        }

    }
    
    // step 2 => convert uppercase into lower case
    for(int j = 0 ; j < temp.length() ; j++){
        temp[j] = toLowerCase(temp[j]);
    }

    // step 3 => check Palindrome
    return checkPalindrome(str);
 }
*/