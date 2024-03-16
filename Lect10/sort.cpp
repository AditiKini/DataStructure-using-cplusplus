//sort 0's 1's and 2's
//Ex: arr[]={0,1,1,0,2,0,2,1} => {0,0,0,1,1,1,2,2}

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void Sort(int arr[], int size)
{
     int start=0, end=size-1, mid = 0;

     while(mid <= end){
        if(arr[mid] == 0){
           swap(arr[start],arr[mid]);
           start++;
           mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[end]);
            end--;
        }
     }
}

int main(){
    int arr[8] = {0,1,1,0,2,0,2,1};
    Sort(arr, 8);
    printArray(arr, 8);
}