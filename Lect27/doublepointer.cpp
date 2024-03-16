#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int* p1 = &i;
    int** p2 = &p1;


    //value of i
    cout<<i<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;


    //address of i value of p1
    cout<<&i<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;

    //address of p1
    cout<<&p1<<endl;
    cout<<p2<<endl;

   //
   cout<<&p2;

}