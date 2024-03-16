#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    // int number[5]; //declare array
    // cout<<"The value at index 1th: "<<number[1]<<endl; //access array element value

    // cout<<endl<<"Array 1 element are: "<<endl;
    // int array1[3] ={1,2,3};
    // printArray(array1,3);


    // cout<<endl<<"Array 2 element are: "<<endl;
    // int array2[15]={2,7};
    // printArray(array2,2);

    cout<<endl<<"Array 3 element are: "<<endl;

    //below line only set first array element with 1 and remaining are set to 0.
    int array3[15]={1};
    
    int array3size = sizeof(array3)/sizeof(int);

    cout<<"The size of array 3 is: "<<array3size<<endl;


    //Initialize all array element by 1.
    for(int i=0; i<array3size; i++){
        array3[i]=1;
    }
    printArray(array3,array3size);

}