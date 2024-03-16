#include<iostream>
#include<string>

using namespace std;

void reverse(string& str, int i, int n){

    //base case
    if(i > (n-i-1))
      return ;
    
    swap(str[i++], str[n-i-1]);

    reverse(str, i, n);

}

int main(){
    string name = "aditi";

    reverse(name, 0, name.length());

    cout<<name<<endl;
}