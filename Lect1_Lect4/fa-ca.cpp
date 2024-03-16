#include<iostream>
using namespace std;

int main(){

    float start, end, gap,c;
    cout<<"Enter start, end and gap value: ";
    cin>>start>>end>>gap;

    while (start<=end)
    {
        c=(start-32)*5/9;
        cout<<c<<endl;
        start=start+gap;
    }
    
    return 0;
}