//sort 0 and 1

#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void Sort(int arr[], int size){
    int left=0, right = size-1;

    while(left < right){
        if( arr[left] == 0)
          left++;
        else if(arr[right] == 1)
          right--;
        else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main(){

    int arr[8]={0,1,0,1,1,0,1,0};
    Sort(arr, 8);
    printArray(arr, 8);
}