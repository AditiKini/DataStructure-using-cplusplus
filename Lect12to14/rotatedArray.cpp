#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
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
        else if(k > arr[mid]){
            s = mid + 1;
        }
        else if(k < arr[mid]){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
    
}

int main(){
    int arr[5] = {7,9,1,2,3};
    int key = 1, n=5;
    int pivot = getPivot(arr, 5);

    if(key >= arr[pivot] && key <= arr[n-1]){
        int ans = binarySearch(arr, pivot, n-1, key);
        cout<<ans;
    }
    else{
        int ans = binarySearch(arr, 0, pivot - 1, key);
        cout<<ans;
    }
}