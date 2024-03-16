#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossibleSol(int arr[], int n, int k, int mid){
    
    int painterCount = 1;
    int lengthofboard = 0;

    for(int i=0; i<n; i++){
        if(lengthofboard + arr[i] <= mid){
            lengthofboard += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > k || arr[i] > mid){
                return false;
            }
            lengthofboard = arr[i];
        }
    }

    return true;
}

int painterPartion(int arr[], int n, int k){
    int s = 0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(isPossibleSol(arr,n,k,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int main(){
    int arr[4]={1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<painterPartion(arr, n, k);
}