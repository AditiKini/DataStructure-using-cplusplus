#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_front(1);
    d.push_back(2);

    d.push_front(3);
    d.push_front(4);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"First Index Element is : "<<d.at(1)<<endl;
    cout<<"second Index Element is : "<<d.at(2)<<endl;

    cout<<"First Element: "<<d.front()<<endl;
    cout<<"Last Element: "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    cout<<"Before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+2);
    cout<<"After erase: "<<d.size()<<endl;
    
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    

}