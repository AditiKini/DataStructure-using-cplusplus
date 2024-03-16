#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int reversed_num=0,r;

    while(n!=0){
        r=n%10;
        reversed_num=reversed_num*10+r;
        n/=10;
    }
    cout<<reversed_num;
}