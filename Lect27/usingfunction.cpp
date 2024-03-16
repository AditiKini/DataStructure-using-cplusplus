#include<iostream>
using namespace std;

void update(int **p2){
  
    //  p2 = p2+1;  => No answer


    // *p2 = *p2 + 1; change the value of p1

    **p2 = **p2 + 1;
}


int main(){
    int i=5;
    int *p1 = &i;
    int **p2 = &p1;


    cout<<"Before: "<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"After: "<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
}



