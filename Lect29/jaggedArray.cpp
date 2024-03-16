#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the no of rows: "<<endl;
    int row;
    cin>>row;

    int Sizes[row] = {0};
    cout<<"Enter the column sizes: "<<endl;
    for(int i=0; i<row; i++){
        cin>>Sizes[i];
    }

    int** arr = new int* [row];
    for(int i=0; i<row; i++){
        arr[i] = new int[Sizes[i]];
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<Sizes[i]; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<Sizes[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}