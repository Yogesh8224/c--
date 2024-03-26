#include <iostream>
using namespace std;

class Queue{
  public :
   int *arr;
   int qfront ;
   int rear;
   int size;

   Queue(){
    size = 100001;
    arr = new int[size];
    qfront =  0;
    rear = 0;
   }

   void enqueue(int data){
      if(rear == size){
       cout <<"Queue is full."<<endl;
       
      }
      else{
        arr[rear] = data;
        rear++;
      }
   }

   int dequeue(){
      if(qfront == rear){
        return -1;
      }
      else{
          int ans = arr[qfront];
          arr[qfront] = -1;
          qfront++;
          if(qfront == rear){
            qfront = 0;
            rear = 0;
          }
          return true;
      }
   }

   bool isEmpty(){
    if(qfront == rear){
        return true;
    }
    else{
        return false;
    }
   }

   int front(){
    if(rear == qfront){
        return -1;
    }
    else{
        return arr[qfront];
    }
   }

};

int main(){
  
}