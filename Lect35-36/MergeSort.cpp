#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int start, int end){
    
    //mid of array
    int mid = start + (end-start)/2;

    //calculate the length array.
    int len1 = mid - start + 1;
    int len2 = end - mid;

    //create to variable size array
    int *first = new int[len1];
    int *second = new int[len2];

    //copying element from main array to copy array
    int mainArrayIndex = start;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
     
    //copying element from main array to copy array
    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    int i=0;
    int j=0;
    mainArrayIndex = start;

    while(i < len1 && j < len2){
        if(first[i] < second[j]){
            arr[mainArrayIndex++] = first[i++];
        }
        else{
             arr[mainArrayIndex++] = second[j++];
        } 
    }

   //remaining element
   while(i < len1){
      arr[mainArrayIndex++] = first[i++];
   }

   while ( j < len2)
   {
       arr[mainArrayIndex++] = second[j++];
   }
   
   delete []first;
   delete []second;
}



void mergeSort(vector<int> &arr, int start, int end){
    //base  case
    if(start >= end){
        return ;
    }

    int mid = start + (end-start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    merge(arr, start, end);
    
}



int main(){
    vector<int> arr = {1, 8, 4, 2, 3, 9, 5, 10, 6};
    int size = arr.size()-1;

    mergeSort(arr, 0, size);

    for(int i=0; i<=size; i++){
        cout<<arr[i]<<" ";
    }

}
































// 3 56 24 80 34
// 3 56 24                80 34
// 3 56      24           80        34
// 3    56   24           80         34
// 3  56 
// 3   24   56   
// 3   24   56            34      80
// 3   24   34    56  80
