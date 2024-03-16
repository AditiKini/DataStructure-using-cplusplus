/* #include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
   vector<int> ans;
   for(int col=0; col<mCols; col++){

       //1=>odd case 0=>even case

       if(col&1){
           //Bottom to top traverse
           for(int row=nRows-1; row>=0; row--){
              ans.push_back(arr[row][col]);
           }
       }
       else{
           //Top to Bottom
           for(int row=0; row<nRows; row++){
              ans.push_back(arr[row][col]);
           }
       }
   }

   return ans;
}

*/

//TC:O(n*m)