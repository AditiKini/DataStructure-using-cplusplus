//Intesection of Two Arrays.

#include<iostream>
#include<vector>
using namespace std;


void printArray(vector<int> ans_arr, int size){
    
    for(int i=0; i<size; i++)
    {
        bool isUnique = true;
        
        for(int j=0; j<i; j++)
        {
            if(ans_arr[i] == ans_arr[j])
            {
               isUnique = false;
               break;
            }
        }
        if(isUnique)
           cout<<ans_arr[i]<<" ";
    }
}

vector<int> Intersection(int arr1[], int arr2[], int n, int m){
    
    vector<int> ans;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
            }
        }
    }
    
    return ans;
}


//simple approach
int main(){
   int n[6]={1,2,2,2,3,4};
   int m[4]={2,2,3,3};
  
   vector<int> ans_arr = Intersection(n,m,6,4);
   printArray(ans_arr, ans_arr.size());
}