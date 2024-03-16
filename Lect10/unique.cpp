#include<iostream>
using namespace std;

void findUnique(int arr[], int size){
     int ans=0;
     for(int i=0; i<size; i++){
        ans = ans^arr[i];
     }
     cout<<"Unique element is: "<<ans;
}

int main(){
    int num[9]={2,4,4,5,6,2,5,6,9};
    findUnique(num, 9);
}