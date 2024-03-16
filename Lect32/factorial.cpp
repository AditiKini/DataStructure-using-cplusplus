//Using Recursion
#include<iostream>
using namespace std;

int Factorial(int n){
    //base case
    if(n==0)
       return 1;
    
    // int smallerProblem = Factorial(n-1);
    // int biggerProblem = n * smallerProblem;
    // return biggerProblem;

    return n*Factorial(n-1);
    
}

int main(){
    int n;
    cin>>n;

    int ans = Factorial(n);
    cout<<ans<<endl;
}