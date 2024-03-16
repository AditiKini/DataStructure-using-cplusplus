#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int k){

    //base case
    if(s>e)
      return -1;
    
    int mid = s+(e-s)/2;
    if(arr[mid] == k)
      return mid;
    
    if(arr[mid] < k)
        return binarySearch(arr, mid+1, e, k);
    else
      return binarySearch(arr, s, mid-1, k);

}

int main(){
    int arr[9]= {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int size = 9;
    int key = 88;

    cout<<binarySearch(arr, 0, size-1 , key);
   
}