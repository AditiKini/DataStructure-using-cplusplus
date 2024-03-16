#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<endl;
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[6]={1,5,6,-3,7,9};
    int arr2[5]={1,2,3,4,5};

    reverse(arr1,6);
    reverse(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);
}