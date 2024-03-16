#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    // for(int i=1; i<n; i++){
        
    //     int current = arr[i];
    //     int j = i-1;
    //     for(; j>=0; j--)
    //     {
    //         if(arr[j] > current){
    //             arr[j+1] = arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j+1] = current;
    // }

    // //printing an array
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    for (int i = 1; i < n; i++)
    {
       int current = arr[i];
       
       int j = i-1;
       while(arr[j] > current && j>=0){
          arr[j+1] = arr[j];
          j--;
       }

       arr[j+1]=current;
    }
    
   //printing an array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[6]={8,12,25,31,32,17};
    int n  = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

}