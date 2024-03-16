#include<iostream>
using namespace std;

int main(){
    int no;
    cout<<"Enter Number: ";
    cin>>no;
    if(no>0)
       cout<<"Number is Positive.";
    else if(no<0)
      cout<<"Number is Negative";
    else 
      cout<<"Number is zero";
    return 0;
}