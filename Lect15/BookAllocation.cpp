#include<iostream>
using namespace std;

bool isPossibleSol(int arr[], int n, int m, int mid){
     
     int studenCount = 1;
     int pageSum = 0;

     for(int i=0; i<n; i++)
     {
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studenCount++;
            if(studenCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
     }
     return true;
}


int bookAllocation(int arr[], int n, int m){
    int start=0;
    
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    int end = sum;
    int mid = start + (end-start)/2;
    int ans = -1;

    while (start <= end)
    {
       if(isPossibleSol(arr,n,m,mid)){
        ans = mid;
        end = mid -1;
       }
       else{
        start = mid +1;
       }
       mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int arr[4]={12,34,67,90};
    int n=4,m=2;
    
    cout<<bookAllocation(arr, n, m);
}