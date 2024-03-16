
#include<iostream>
using namespace std;

int main(){
    int n,i=2,count=1;
    cout<<"Enter Number: ";
    cin>>n;
    while(i<n)
    {
       if(n%i==0){
         count++;
       }
       i+=1;
    }
    if(count > 1){
        cout<<"Not prime";
    }
    else{
        cout<<"prime";
    }
    return 0;
}


/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int i=2;
    while(i<n)
    {
       if(n%i==0){
          cout<<"Not prime"<<endl;
       }
       else{
          cout<<"Prime"<<endl;
       }
       i+=1;
    }
    return 0;
}
*/