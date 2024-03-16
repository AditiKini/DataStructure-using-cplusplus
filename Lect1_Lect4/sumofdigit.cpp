#include<iostream>
using namespace std;

int main(){
    int n, i,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    // while(i<=n){
    //     sum=sum+i;
    //     i+=1;
    // }
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}