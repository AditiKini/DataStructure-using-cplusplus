#include<iostream>
using namespace std;


int firstOcc(int arr[], int size, int key){
   int start = 0;
   int end = size - 1;
   int mid = start + (end - start)/2;
   
   int ans = -1;

   while (start<=end)
   {
       if(key == arr[mid]){
           ans = mid;
           end = mid - 1;
       }
       else if(key > arr[mid]){
           start = mid + 1;
       }
       else if(key < arr[mid]){
          end = mid - 1 ;
       }

       mid = start + (end - start)/2;
   }
   return ans;
}

int lastOcc(int arr[], int size, int key){
   int start = 0;
   int end = size - 1;
   int mid = start + (end - start)/2;
   
   int ans = -1;

   while (start <= end)
   {
       if(key == arr[mid]){
           ans = mid;
           start = mid + 1;
       }
       else if(key > arr[mid]){
           start = mid + 1;
       }
       else if(key < arr[mid]){
          end = mid - 1 ;
       }

      mid = start + (end - start)/2;

   }
   return ans;
}

int main(){
    int arr[18] = {1,2,2,3,3,3,3,3,3,3,3,3,3,4,4,5,6,7};
    int first = firstOcc(arr, 18, 3);
    int second = lastOcc(arr, 18, 3);
    cout<<first<<" "<<second;
}