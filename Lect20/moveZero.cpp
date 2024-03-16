#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeros(vector<int> nums, int n){
    
    int i=0;

    for(int j=0; j<n; j++){
        if(nums[j] != 0){
            swap(nums[i], nums[j]);
            i++;
        } 
    }

    for(int i:nums){
        cout<<i<<" ";
    }
}

int main(){
    vector<int> nums = {0,1,0,3,12};
    int n = nums.size();
    moveZeros(nums, n);
}