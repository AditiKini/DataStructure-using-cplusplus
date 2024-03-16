#include<iostream>
using namespace std;

void tripletSum(int arr[], int size , int target){
   for(int i=0; i<size; i++)
   {
      for(int j=i+1; j<size; j++)
      {
       for(int k=j+1; k<size; k++)
       {
            if(arr[i]+arr[j]+arr[k] == target){
                cout<<arr[i]<<" ";
                cout<<arr[j]<<" ";
                cout<<arr[k];
                cout<<endl;
            }
       }
      }
   }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int s=12;

    tripletSum(arr, 10, s);
}