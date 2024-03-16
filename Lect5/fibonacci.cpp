#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";

    for(int i=2; i<n; i++){
      int next_number=a+b;
      cout<<next_number<<" ";
      a=b;
      b=next_number;
    }
    return 0;
}