#include<iostream>
#include<vector>

using namespace std;
 
vector<int> merge(vector<int> arr1, int m, vector<int> arr2, int n){
     
    int i=m-1, j=n-1;
    int k= m+n-1;

    if(arr1[0] == 0 && m+n == 1)
            arr1[0] = 1;
    
    while(i>=0 && j>=0){
        if(arr1[i] > arr2[j])
            arr1[k--] = arr1[i--];
        else
            arr1[k--] = arr2[j--];
    }

    while(j>=0)
        arr1[k--] = arr2[j--];   

    for(int i:arr1)
        cout<<i<<" ";
}   

int main(){
   vector<int> arr1 = {2};
   vector<int> arr2 = {1};

   int m = arr1.size();
   int n = arr2.size();

   arr1.resize(m+n);
   for(int i=m; i<m+n; i++)
        arr1[i] = 0;

   merge(arr1, m, arr2, n);
}

