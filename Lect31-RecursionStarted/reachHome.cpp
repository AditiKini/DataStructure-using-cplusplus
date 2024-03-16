#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<"Source   "<<src<<"   Destination "  <<dest<<endl;
    //base condition
    if(src == dest){
        cout<<"I reached my Home..";
        return ;
    }

    //processing
    src++;

    //tail recursion
    reachHome(src, dest);
}

int main(){
    int src = 1;
    int dest = 10;

    reachHome(src, dest);
}