#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        //first triangle
        int space=n-i;
        while(space){
            cout<<" ";
            space-=1;
        }
        //second triangle
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        
        //third triangle
        int start=i-1;
        while(start){
            cout<<start;
            start-=1;
        }

       cout<<endl;
       i++;


    }
    return 0;
}