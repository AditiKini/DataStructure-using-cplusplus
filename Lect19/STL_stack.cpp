#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;

    s.push("Aditi");
    s.push("Parija");
    s.push("Akshata");

    cout<<"Top Element is: "<<s.top()<<endl;
    s.pop();

    cout<<"Top Element is: "<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;

}