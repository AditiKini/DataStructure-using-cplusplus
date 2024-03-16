#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossibleSol(int stalls[], int n, int k, int mid){
      int countCows=1;
      int previous = stalls[0];
     
      for(int i=0; i<n; i++){
        if(stalls[i]-previous >= mid){
            countCows++;
            if(countCows == k){
                return true;
            }
            previous = stalls[i];
        }
      }
      return false;
}


int aggressiveCows(int stalls[], int n, int k){
    int s=0;
    int e = stalls[n-1];
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(isPossibleSol(stalls, n, k, mid)){
            ans = mid;
            s = mid + 1; //right part(because largest distance)
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}


int main(){
    int stalls[]={4,2,1,3,6};
    int k=2;
    int n = sizeof(stalls)/sizeof(stalls[0]);
    sort(stalls, stalls + n);

    cout<<aggressiveCows(stalls, n, k);
}