#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n!=0){
        int last_digit=n%10;
        reverse=reverse*10+last_digit;
        n=n/10;
    }
    cout<<"Reversed no is: "<<reverse;
}

//123=>321
/*
last_digit=no%10
reverse=reverse*10+last_digit
no=no/10
*/