#include<iostream>
using namespace std;

void update(int arr[], int size){

    cout<<"Inside the Update function."<<endl;
    //update the value of first element in array.
    arr[0]=120;
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Going back to main function."<<endl;
}

int main(){
    int arr[3] = {1,3,4};
    
    update(arr, 3);

    cout<<"Priting the array element in main Function."<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }

}