#include<iostream>
using namespace std;

// int AP(int n){
//     int ans=3*n+7;
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<AP(n);
// }


//an = a + (n − 1) × d
// a = First term
// d = Common difference
// n = number of terms
// an = nth term

void  AP(int a, int d, int n)
{
    for(int i=a; i<=n; ){
        cout<<i<<endl;
        i=i+d;
    }

}


int main(){
    int a,n,d;
    cout<<"Enter first term: ";
    cin>>a;
    cout<<"Enter the common difference: ";
    cin>>d;
    cout<<"Enter the last number: ";
    cin>>n;
    AP(a,d,n);
}