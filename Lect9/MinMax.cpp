#include<iostream>
using namespace std;

int getMax(int arr[], int size){
   
    int maxi = INT32_MIN;

    for(int i=0; i<size; i++)
    {
        
        maxi = max(maxi,arr[i]);
        /*
        if(arr[i]>max){
            max=arr[i];
        } */  
    }

    return maxi;
}

int getMin(int arr[],int size){
    
    int mini = INT32_MAX;

    for(int i=0; i<size; i++){

        mini = min(mini, arr[i]);
        /*
        if(arr[i]<min){
           min=arr[i];
        } */ 
    }
    return mini;
}

int main(){
    int num[50],size;
    
    cout<<"Enter the size of array elements: ";
    cin>>size;

    //Taking input from user.
    cout<<"Enter the array element: "<<endl;
    for(int i=0; i<size; i++){
        cin>>num[i];
    }


    //Priting the maximum ans minimum.
    cout<<"Maximum value is: "<<getMax(num,size)<<endl;
    cout<<"Minimum value is: "<<getMin(num,size);
}