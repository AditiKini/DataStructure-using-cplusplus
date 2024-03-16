#include<iostream>
using namespace std;

void update(int& n){
    n++;
}

int& func(int n){
    int num = n;
    int& ans=num;
    ans++;
    return ans;
}

int* fun(int n){
    int* p = &n;
    return p;
}

int main(){
    int n = 10;

    cout<<"Before: "<<n<<endl;
    update(n);
    cout<<"After: "<<n<<endl;
  
   cout<<func(n)<<endl; 
   //not update
   cout<<n<<endl;

   cout<<fun(n)<<endl;
   //not update
   cout<<n<<endl;

}