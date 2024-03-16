#include<iostream>
using namespace std;

int dummy(int n){
    n++;
    cout<<"n is "<<n<<endl;
    return n;
}

int main(){
    int n;
    cin>>n;
    n=dummy(n);
    cout<<"Main function: the value n is "<<n;
}
