#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void InterLeave(queue<int> &q){

    int size = q.size();
    queue<int> newq;

    for(int i=0; i<size/2; i++){
        int val = q.front();
        q.pop();
        newq.push(val);
    }

    while (!newq.empty())
    {
       int first = newq.front();
       newq.pop();
       q.push(first);

       int second = q.front();
       q.pop();
       q.push(second);
       
    }
    
}

void InterLeaveUsingStack(queue<int> &q){
    
    int size = q.size();
    stack<int> st;

    int i=0;
    while (i < size/2)
    {
        int val = q.front();
        q.pop();
        st.push(val);
        i++;
    }

    while (!st.empty())
    {
        int val = st.top();
        st.pop();
        q.push(val);
    }

    int j=0;
    while(j < size/2){
        int val = q.front();
        q.pop();
        q.push(val);
        j++;
    }

    int k=0;
    while (k < size/2)
    {
        int val = q.front();
        q.pop();
        st.push(val);
        k++;
    }

    while (!st.empty())
    {
       int first = st.top();
       st.pop();
       q.push(first);

       int second = q.front();
       q.pop();
       q.push(second);
    }
    
}


int main(){

    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    
    // InterLeave(q);
    InterLeaveUsingStack(q);

    while (!q.empty())
    {
       cout<<q.front()<<" ";
       q.pop();
    }
    
}