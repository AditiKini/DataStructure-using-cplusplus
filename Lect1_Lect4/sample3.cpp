#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter an character: ";
    cin>>ch;

    if(ch>='a' && ch <='z')
       cout<<"Lower Case";
    else if(ch>='A' && ch <= 'Z')
      cout<<"Upper case";
    else if(ch >= '0' && ch <= '9')
      cout<<"Numeric value";
    return 0;
}