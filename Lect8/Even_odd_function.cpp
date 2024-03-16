#include<iostream>
using namespace std;

//1=>even 0=>odd
bool isEven(int a){
    // if(a%2!=0)
    //   return 0;
    // return 1;
    if(a&1)
      return 0;
    return 1;
}

int main(){

    int num;
    cin>>num;

    if(isEven(num))
       cout<<"Number is even."<<endl;
    else
       cout<<"Number is odd."<<endl;
}