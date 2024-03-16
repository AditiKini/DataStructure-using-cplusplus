#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int k){
   
   int s = 0, e = size-1, mid;
  
   while(s <= e)
   {
       mid = s + (e-s)/2;

      if(arr[mid] == k)
         return mid;

      if(arr[s] <= arr[mid])
         (k >= arr[s] && k < arr[mid])?(e = mid -1):(s = mid + 1);

      else
         (k > arr[mid] && k <= arr[e])?(s = mid + 1):(e = mid - 1);
   }
   return -1;
}


int main(){
   int arr[5] = {7,9,10,2,3};
   int key = 3;

   int ans = binarySearch(arr, 5, key);
   if( ans != -1)
      cout<<"Element found at index "<<ans;
   else 
     cout<<"Element not found."<<ans;
   
}