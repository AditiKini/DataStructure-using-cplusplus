#include<iostream>
using namespace std;

int main(){
    // int num = 5;
    // int *p = &num;

    // cout<<p<<endl;
    // cout<<*p<<endl;

    // (*p)++;

    //copy pointer
    // int *q = p;
    // cout<<p<<" - "<<q<<endl;
    // cout<<*p<<" - "<<*q<<endl;

    //  p = p+1;
    //  cout<<p<<endl;

    //  p = p+1;
    //  cout<<p;

    
    int a = 7;
    int *p = &a;
    p = p+1;
    cout<<a<<" "<<p;
}