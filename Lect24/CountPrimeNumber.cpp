#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n, ctn = 0;
    cin>>n;
    vector<bool> prime(n, true);

    prime[0] = prime[1] = false;

    for(int i=2; i<n; i++){
        if(prime[i]){
            ctn++;

            for(int j=2*i; j<n; j=j+i){
                prime[j]=false;
            }
        }
    }

    cout<<ctn;

}