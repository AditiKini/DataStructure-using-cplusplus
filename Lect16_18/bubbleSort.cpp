#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        cout<<"Outer Iteration: "<<i<<endl;

        bool swapped = false;

        for(int j=0; j<n-i; j++)
        {
            cout<<"     Inner Iteration: "<<j<<endl;
            
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false)
            break; 
            
        cout<<i<<"  Round:  ";
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[]={6,2,8,4,10};
    // int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr, n);
}