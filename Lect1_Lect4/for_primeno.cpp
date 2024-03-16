#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    bool isPrime=1;

    for(int i=2; i<n; i++){
        if(n%i==0){
           isPrime=0;
           break;
        }
    }

    if(isPrime == 0){
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"It is a prime number"<<endl;
    }

    // for(int i=0;i<=5;i--){
    //     cout<<i<<" ";
    //     i++;
    // }

    // for(int i=0;i<=15;i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    //     //0 3 5 7 9 11 13 15
    // }

    // cout<<(0&1);
}
