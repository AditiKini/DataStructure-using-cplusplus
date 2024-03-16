#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> nums, int k){

    vector<int> temp(nums.size());
    
    for(int i=0; i<nums.size(); i++){
        temp[(i+k)%nums.size()] = nums[i];
    }

    nums = temp;

    for(int i:nums){
        cout<<i<<" ";
    }
}


int main(){
    vector<int> nums = {10,20,30,40};
    int k=2;

    rotate(nums, k);
} 