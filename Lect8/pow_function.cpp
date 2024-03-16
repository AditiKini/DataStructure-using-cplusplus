#include<iostream>
using namespace std;

/*
//Using Function without parameter.
int power(){
    int a, b;
    cout<<endl<<"Enter two Numbers: "<<endl;
    cin>>a>>b;

    int ans=1;

    for(int i=1; i<=b; i++){
       ans *= 2;
    }
    
    return ans;
}

*/

//Using Function with parameter.
int power(int a, int b){
    
    int ans=1;

    for(int i=1; i<=b; i++){ 
       ans *= a;
    }
    
    return ans;
}
int main(){
   
   int n1,n2;
   cin>>n1>>n2;

   int answer = power(n1,n2);
   cout<<"Answer is: "<<answer;

}