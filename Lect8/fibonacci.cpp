#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 1)
       return n;
    int a=0,b=1;
    int ans;
    for(int i=2; i<=n; i++){
        ans=a+b;
        a=b;
        b=ans;
    }
    return ans;
}

// int fibonacci(int n){
//     if(n==0 || n==1)
//        return n;
//     return fibonacci(n-1) + fibonacci(n-2);
// }


int main(){
    int n;
    cin>>n;
    int answer= fibonacci(n);
    cout<<answer;
}