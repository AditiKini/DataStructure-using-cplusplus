#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //1st triangle
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }

        //2nd triangle
        int start=i-1;
        while(start){
            cout<<"**";
            start-=1;
        }

        // int new_start=i-1;
        // while(new_start){
        //     cout<<"*";
        //     new_start-=1;
        // }

        //3rd triangle
        int j2=1;
        int val=i;
        while(j2<=n-i+1){
            cout<<n-val+1;
            val +=1;
            j2++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}