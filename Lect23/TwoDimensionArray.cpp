#include<iostream>
using namespace std;

int main(){
    
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9}; =>by default row wise
    int arr[3][3] = {{1,11,111},{2,22,222},{3,33,333}};

    /* for(int i=0; i<3; i++)  //row wise input
    {
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    } */

  
    /* 
    for(int col=0; col<3; col++) //col wise  input
    {
        for(int row=0; row<3; row++){
            cin>>arr[row][col];
        }
    }
    
    */

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}