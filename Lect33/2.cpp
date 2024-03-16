#include<iostream>
using namespace std;

int getSum(int *arr, int size){
    
    //base condition 
    if(size == 0)
      return 0;
    
    if(size == 1)
      return arr[0];

    return getSum(arr+1, size-1) + arr[0];

}

int main(){
    int arr[5]={1, 2, 3, 4 ,5};
    int size = 5;
    
    cout<<getSum(arr, size);



}