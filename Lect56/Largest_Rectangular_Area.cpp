#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallestNumber(vector<int> arr, int n){
    
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

vector<int> prevSmallestNumber(vector<int> arr, int n){
    
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


int getLargestRectangularArea(vector<int> &heights){

    int n = heights.size();

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
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    int ans = getLargestRectangularArea(heights);
    cout<<ans;
}

