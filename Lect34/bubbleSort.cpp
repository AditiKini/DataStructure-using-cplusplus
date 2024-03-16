#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){

    //base case
    if(n==0 || n==1)
      return ;
    
    for(int i=0; i<n-1; i++){
       if(arr[i] > arr[i+1]){
         swap(arr[i], arr[i+1]);
       }
    }

    bubbleSort(arr, n-1);

}
int main(){
    
    int arr[7] = {1,4,2,7,5,9,2};
    
    bubbleSort(arr, 7);

    cout<<"After sorting the array is: "<<endl;
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }

}