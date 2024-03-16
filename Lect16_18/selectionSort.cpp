#include<iostream>
using namespace std;

void  selctionSort(int arr[], int n){
    
     int temp=0;
     for(int i=0; i<n-1; i++){
         cout<<"Outer Loop Iteration: "<<i<<endl;
        int minElement = i;
        for(int j=i+1; j<n; j++)
        {
             cout<<"     Inter Loop Iteration: "<<j<<endl;
            if(arr[j] < arr[minElement]){
                minElement = j;
            }
        }
        cout<<"Swaping: "<<endl;
         temp=arr[i];
         arr[i]=arr[minElement];
         arr[minElement] = temp;
        //swap(arr[minElement], arr[i]);
     }

     cout<<"Sorted Array: ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
}


int main(){

   int n;
   cin>>n;

   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   
    cout<<"Before sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selctionSort(arr, n);
}