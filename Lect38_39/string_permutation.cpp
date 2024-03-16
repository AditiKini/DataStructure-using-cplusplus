#include<iostream>
#include<vector>
using namespace std;

void solve(vector<vector<int>>& ans, int index, vector<int> nums){
      
        if(index >= nums.size()-1){
            cout<<index<<endl;
            ans.push_back(nums);
            return ;
        }


        for(int i=index; i<nums.size(); i++){
            cout<<"i: "<<i<<" index: "<<index<<endl;
            swap(nums[i], nums[index]);
            solve(ans, index+1, nums);
            swap(nums[i], nums[index]);
        } 

}

int main(){

    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    int index= 0;
    solve(ans, index, nums);

    for (int i = 0; i < ans.size(); ++i) {
        
        for (int j = 0; j < ans[i].size(); ++j) {

            cout << ans[i][j] << " ";
        }  
        cout<<endl;
    }

}