#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(11);
    q.push(14);
    q.push(6);

    cout<<q.front()<<endl;
    q.pop();
    
    cout<<"Size of queue is "<<q.size()<<endl;

    cout<<q.front()<<endl;
    q.pop();

    cout<<q.front()<<endl;
    q.pop();

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else 
        cout<<"Queue is not empty"<<endl;

}
