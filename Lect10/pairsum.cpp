#include<iostream>
using namespace std;

void pairSum(int arr[], int size, int target){
     
     for(int i=0; i<size; i++){

        for(int j=i+1; j<size; j++){

            if(arr[i]+arr[j] == target){
                cout<<min(arr[i], arr[j])<<" ";
                cout<<max(arr[i], arr[j])<<" ";
                cout<<endl;
            }
        }
     }

}
int main(){
    int arr[5]={2,-3,3,3,-2};
    int s=0;

    pairSum(arr, 5, s);
}

/*

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   unordered_set<int> temp;

   for(int i=0; i<arr.size(); i++){
      int target = s - arr[i];
      
      if(temp.count(target) > 0){
         ans.push_back({min(target, arr[i]), max(target, arr[i])});
      }

      temp.insert(arr[i]);
   }
    
   sort(ans.begin(), ans.end());
   return ans;
}

*/