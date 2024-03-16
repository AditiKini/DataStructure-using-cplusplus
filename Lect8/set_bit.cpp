#include<iostream>
using namespace std;

/*
a: 2 => 10
b: 3 => 11

calculate number of set bits i.e. 1 in a and b.
function:
    if n&1
       count++
    n=n>>1
a=>function + b=>function = answer
*/
int count_set_bits(int n){
  
    int count = 0;
    while(n!=0){
       if(n&1)
         count++;
       n = n >> 1; // n>>=1
   }
   return count;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<count_set_bits(a)+count_set_bits(b);
}