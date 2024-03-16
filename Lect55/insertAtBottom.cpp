#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &num, int x){

    //base case
    if(num.empty()){
        num.push(x);
        return ;
    }

    int temp = num.top();
    num.pop();

    insertAtBottom(num, x);

    num.push(temp);
}

int main(){
    stack<int> num;
    num.push(3);
    num.push(5);
    num.push(6);
    num.push(8);

    // 8 6 5 3 

    int x = 9;
    insertAtBottom(num, x);


    while (!num.empty())
    {
        cout<<num.top()<<" ";
        num.pop();
    }
    
}
