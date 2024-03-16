#include<iostream>
using namespace std;

bool power_of_2(int n){
   
    int set_bit = 0;
    
    while(n!=0){
        if(n&1)
          set_bit += 1;
        n = n >> 1;
    }

    if(set_bit == 1)
       return true;
    else
       return false;
}

int main(){
    int n;
    cin>>n;
    
    if(power_of_2(n))
       cout<<"Yes";
    else
       cout<<"No";
}