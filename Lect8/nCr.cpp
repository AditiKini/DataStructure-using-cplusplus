#include<iostream>
using namespace std;

//unsigned long long is allow us to store large number of factorial.
unsigned long long factorial(int n){
    unsigned long long fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

unsigned long long nCr(int n, int r){

  unsigned long long  num = factorial(n);
  unsigned long long  denom = factorial(r) * factorial(n-r);

  return num/denom;
}


int main(){
   int n,r;
   cin>>n>>r;
   unsigned long long  answer = nCr(n,r);
   cout<<answer;


}