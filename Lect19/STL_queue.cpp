#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> s;

    s.push("Aditi");
    s.push("Kini");
    s.push("Narayan");

    cout<<"First Element in queue is: "<<s.front()<<endl;
    s.pop();
    cout<<"After pop First Element in queue is: "<<s.front()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    s.pop();
    s.pop();
    cout<<"Empty or not: "<<s.empty();

}