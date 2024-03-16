#include<iostream>
using namespace std;
int main(){
    int n,fact=1,num=1;
    cout<<"Enter Number: ";
    cin>>n;
    while(num<=n){
        fact=fact*num;
        num+=1;
    }
    cout<<fact;
    return 0;
}

