#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *p = &i;

    int a = i;
    a++;
    
    cout<<"a: "<<a<<endl;
    cout<<i<<endl;

    cout<<"Address is: "<<p<<endl;
    cout<<"Value is: "<<*p<<endl;

    int *q = 0;
    cout<<q<<endl;

    q = &i;
    cout<<"Address is: "<<q<<endl;
    cout<<"Value is: "<<*q<<endl;

    (*p)++;
    
    cout<<i<<endl;

    (*q)++;

    cout<<i<<endl;

    


}