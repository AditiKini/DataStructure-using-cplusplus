#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallestNumber(int *arr, int n){
    
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--){
        int curr = arr[i];
        
        while (s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        
        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}

vector<int> prevSmallestNumber(int *arr, int n){
    
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=0; i<n; i++){
        int curr = arr[i];
        
        while (s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        
        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}


int getLargestRectangularArea(int *heights, int n){

    //int n = heights.size();

    vector<int> next(n);
    next = nextSmallestNumber(heights, n);

    vector<int> prev(n);
    prev = prevSmallestNumber(heights, n);

    int area = INT32_MIN;
    for(int i=0; i<n; i++){
        int l = heights[i];
        
        if(next[i] == - 1)
            next[i] = n;

        int b = next[i] - prev[i] - 1;

        int newArea = l*b;
        area = max(area, newArea);
    }

    return area;
}
int main(){
    int n=4;
    int m=4;
    int arr[n][m] = {{0,0,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};

    int area = getLargestRectangularArea(arr[0], m);

    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] != 0)
               arr[i][j] = arr[i][j] + arr[i-1][j];
            else
              arr[i][j]=0;
        }

        int newArea = getLargestRectangularArea(arr[i], m);
        area = max(area, newArea);
    }
    
    cout<<area;
}

