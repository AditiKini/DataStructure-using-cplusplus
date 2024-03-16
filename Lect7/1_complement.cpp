#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int m=n;
    int mask=0;
    while (m!=0)
    {
       mask = (mask << 1) | 1;
       m = m >> 1;
    }
    
    //edge case
    if(n == 0)
    {
        cout<<"1";
    }
    else
    {
        int ans = (~n)&mask;
        cout<<"Answer: "<<ans;
    }
}