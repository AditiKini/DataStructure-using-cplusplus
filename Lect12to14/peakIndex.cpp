//Peak Index in mountain array.

#include<iostream>
using namespace std;

//start = s and end = e
int peakIndex(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e =  mid;
        }
        mid = s + (e-s)/2;
    }

    return s;
}

int main(){
   int arr[4] = {3,4,5,1};
   int index = peakIndex(arr, 4);
   cout<<"Peak Index is: "<<index;
}