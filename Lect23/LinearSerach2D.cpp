#include<iostream>
using namespace std;

//Time  complexity:- O(n*m)
bool linearSearch(int arr[][3], int target){

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;

}


int main(){
    
    int arr[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    int element;
    cout<<"Enter Element to be Search: ";
    cin>>element;    

    if(linearSearch(arr, element)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }


}