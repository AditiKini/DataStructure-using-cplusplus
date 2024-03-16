#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter First Number: ";
    cin>>n1;
    cout<<"Enter Next Number: ";
    cin>>n2;

    char ch;
    cout<<"Enter the operation which you want to perform: ";
    cin>>ch;

    switch(ch){
        case '+': cout<<n1<<ch<<n2<<"="<<(n1+n2)<<endl;
                break;
        case '-': cout<<n1<<ch<<n2<<"="<<(n1-n2)<<endl;
                break;
        case '*': cout<<n1<<ch<<n2<<"="<<(n1*n2)<<endl;
                break;
        case '/': cout<<n1<<ch<<n2<<"="<<(n1/n2)<<endl;
                break;
        case '%': cout<<n1<<ch<<n2<<"="<<(n1%n2)<<endl;
                break;
        default: cout<<"Please Enter valid operation"<<endl;

    }
    
}