#include<iostream>
using namespace std;


class ABC{
    public:
       int x;
    
       ABC(){
          x = 10;
       }
};

int main(){

    const ABC a1;
    cout<<a1.x;

    a1.x = 20;
}
