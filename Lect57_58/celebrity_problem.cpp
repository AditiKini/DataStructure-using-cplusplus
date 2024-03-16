#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int celebrity(vector<vector<int>> &M, int n){

    stack<int> s;

    for(int i=0; i<n; i++){
        s.push(i);
    }

    while (s.size() > 1)
    {
       int a = s.top();
       s.pop();

       int b = s.top();
       s.pop();

       //if a knows b 
       if(M[a][b] == 1){
          s.push(b);
       }
       else{
         s.push(a);
       }
    }

    int celebrity = s.top();
    int rowCount = 0;
    for(int i=0; i<n; i++){
        if(M[celebrity][i] == 0){
            rowCount++;
        }
    }

    if(rowCount != n)
      return -1;

    int colCount = 0;
    for(int i=0; i<n; i++){
        if(M[i][celebrity] == 1){
            colCount++;
        }
    }

    if(colCount != n-1)
      return -1;

    return celebrity;

}

int main(){
    vector<vector<int>> M = {{0, 1},{1, 0}};
    
    // M = {{0,1,0},{0,0,0},{0,1,0}};
    int n = 2;
    cout<<celebrity(M, n);
}