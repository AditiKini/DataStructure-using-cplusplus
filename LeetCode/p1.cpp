/*
Input: 234
Output: 15

Prod=2*3*4 = 24
Sum=2+3+4 = 9
Output=24-9=15
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int product=1;
    int sum=0;

  while(n!=0){
     int last_digit=n%10;
     product*=last_digit;
     sum+=last_digit;
     n=n/10;
  }
  int answer=product-sum;
  cout<<answer;
   
}