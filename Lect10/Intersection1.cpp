#include<iostream>
#include<vector>
using namespace std;

vector<int> intersectionArray(int arr1[],int arr2[], int n, int m){
    
    int i=0,j=0;
    
    vector<int> ans;

    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else{
            j++;
        }    
    }
    return ans;

}

int main(){
    int n[6]={1,2,2,2,3,4};
    int m[4]={2,2,3,3};

    vector<int> answer = intersectionArray(n,m,6,4);

    for(int i=0; i<answer.size(); i++){
        cout<<answer[i]<<" ";
    }
}