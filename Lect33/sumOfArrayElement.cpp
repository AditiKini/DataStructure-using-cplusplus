#include<iostream>
using namespace std;

int getSum(int *arr, int size){
    
    //base condition 
    if(size == 0)
      return 0;
    
    return getSum(arr, size - 1) + arr[size-1];

}

int main(){
    int arr[1]={5};
    int size = 1;
    
    cout<<getSum(arr, size);



}