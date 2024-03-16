#include<iostream>
using namespace std;


void getSum(int *arr, int n){

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += i[arr]; //*(arr + i) *( i + arr)
    }

    cout<<sum;
}

int  main(){
    int n;
    cin>>n;

    //variable size input
    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    getSum(arr, n);
}