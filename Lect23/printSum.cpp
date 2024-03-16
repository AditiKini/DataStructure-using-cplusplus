#include<iostream>
using namespace std;

void printRowSum(int arr[][3], int row, int col){
    
    cout<<"Printing the sum of rows: "<<endl;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }

}

void printColSum(int arr[][3], int row, int col){
    
    cout<<"Printing the sum of Cols: "<<endl;
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }

}

int main(){
    int arr[3][3];

    //taking input from user
    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }


    //printing an array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printRowSum(arr, 3, 3);
    printColSum(arr, 3, 3);
}