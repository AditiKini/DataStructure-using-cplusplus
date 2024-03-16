#include<iostream>
// #include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=0; i<=30; i++ ){
        
        if(ans == n)
          cout<<"Yes";

        if(ans < INT32_MAX/2)
           ans=ans*2;
    }
    return false;
}

/*
int n;
    cin>>n;
    for(int i=0; i<=30; i++){
        int ans = round(pow(2,i));

        if(ans == n){
            cout<<"yes";
        }
    }
    return false;
    
*/