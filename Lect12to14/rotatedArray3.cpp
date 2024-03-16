#include<iostream>
using namespace std;

int getPivot(int arr[], int s, int e){
    int mid = s + (e-s)/2; 

    while(s < e){
        (arr[mid] >= arr[0])?(s = mid+1):( e = mid);
        mid = s + (e-s)/2; 
    }
    return s;  
}

int binarySearch(int arr[], int s, int e, int k){
    int mid = s + (e-s)/2;
    while (s <= e)
    {
        if(arr[mid] == k){
            return mid;
        }
        (k > arr[mid])?(s = mid + 1):(e = mid - 1);

        mid = s + (e-s)/2;
    }
    return -1;   
}

int main(){
    int arr[5] = {7,9,1,2,3};
    int key = 8, n=5,ans;
   
    int pivot = getPivot(arr,0,n-1);

    (key >= arr[pivot] && key <= arr[n-1])?(ans = binarySearch(arr, pivot, n-1, key)):(ans = binarySearch(arr, 0, pivot - 1, key));
    
    cout<<"Element is found at index: "<<ans;
}