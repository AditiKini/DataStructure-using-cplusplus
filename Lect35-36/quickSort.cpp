#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int start, int end){

    int pivot = arr[start];
    int count = 0;

    for(int i=start+1; i<=end; i++){
        if(arr[i] <= pivot ){
            count++;
        }
    }

    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    int i=start;
    int j=end;

    while( i < pivotIndex && j > pivotIndex){

        while (arr[i] <= pivot)
        {
           i++;
        }

        while(arr[j] > pivot){
           j--;
        }

        if(arr[i] > pivot && arr[j] < pivot){
            swap(arr[i], arr[j]);
        }
        
    }
     
    return pivotIndex;
}

void quickSort(vector<int>& arr, int start, int end){

     //base case
    if(start >= end)
    {
        return ;
    }

    int p = partition(arr, start, end);
    
    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);

}

int main(){
   vector<int> arr = {7, 24, 45, 2, 80, 4, 1};
    int n = arr.size();

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}