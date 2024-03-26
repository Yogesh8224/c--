#include <iostream>
#include <queue>
using namespace std;
int main(){

queue <int> q;

q.push(5);
q.push(7);
q.push(1);

cout << "Front : "<< q.front()<<endl;
cout <<"Size : "<<q.size()<<endl;
cout <<q.back()<<endl;

q.pop();
q.pop();
q.pop();

if(q.empty()){
    cout <<"Queue is empty."<<endl;
}
else{
    cout <<"Queue is not empty."<<endl;
}

return 0;

}