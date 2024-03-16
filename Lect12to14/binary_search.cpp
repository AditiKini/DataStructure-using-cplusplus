#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
   int start=0, end = size-1;
   int mid = start + (end-start)/2;

   while(start<=end){
       if(arr[mid] == key){
         return mid;
       }

       if(key > arr[mid]){
         start = mid + 1;
       }
       else{
        end = mid - 1;
       }
       mid = start + (end-start)/2;
   }
   return -1;
}


int main(){
    int evenarr[6]={6, 8, 9, 17, 22, 30};
    int oddarr[5]={2, 5, 9, 10, 16};
   
    int evenIndex = binarySearch(evenarr, 6, 30);
    cout<<"Index of element 30 is: "<<evenIndex<<endl;

    int oddIndex = binarySearch(oddarr, 5, 5);
    cout<<"Index of element 5 is: "<<oddIndex<<endl;

}
//Time complexity = O(LogN)