#include<iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
     for(int i=1; i<size; i++)
     {
        int current = arr[i];
        
        int j=i-1;

        for(; j>=0; j++){

            if(arr[j] > current){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = current;
     }

     //printing an array
     for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
     }

}


int main(){
    int arr[]={8,12,25,31,32,17};
    int n  = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

}