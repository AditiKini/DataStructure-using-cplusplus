#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    cout<<endl<<"Atfer swapping:  "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[], int size){
    //  int start=0;
    //  int next=1;

    //  while(next < size){
    //     swap(arr[start],arr[next]);
    //     start+=2;
    //     next+=2;
    //  }

    int temp = 0;

    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            //swap(arr[i],arr[i+1]);
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

int main(){
    int even[6]={10,20,30,40,50,60};
    int odd[5]={2,4,6,8,7};

    swapAlternate(even, 6);
    printArray(even, 6);

    swapAlternate(odd, 5);
    printArray(odd, 5);


}