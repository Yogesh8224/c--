#include <iostream>
using namespace std ;

class Stack{
    public :
      int *arr;
      int size ;
      int top ;

      Stack(int size){
         this -> size = size;
         arr = new int [size];
         top = -1;
      }
      
      void push(int element){
          if(size - top > 1){
            top++;
            arr[top] = element;
          }
          else{
            cout << "Stack Overflow."<<endl;
          }
      }

      void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack underflow."<<endl;
        }
      }

      int peek(){
        if (top>= 0){
            return arr[top];
        }
        else{
            cout << "Stack is empty."<<endl;
            return -1;
        }
      }

      bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
      }

};

int main(){
    Stack st(5);

    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    cout<< st.peek()<<endl;

    st.pop();
    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;
    st.pop();
    st.pop();
   cout<< st.peek()<<endl;

    if(st.isEmpty()){
        cout << "Stack khali hai"<<endl;
    }
    else{
        cout<< "Stack Khali nahi hai.";
    }
}