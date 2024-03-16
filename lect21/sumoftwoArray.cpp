#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> ans){
      int s=0;
      int e=ans.size()-1;

      while(s<e){
        swap(ans[s++], ans[e--]);
      }

      for(int i:ans){
        cout<<i<<" ";
      }
}

vector<int> sumOfArray(vector<int> a, int n, vector<int> b, int m)
{
    int i=n-1;
    int j=m-1;
    int carry = 0;

    vector<int> ans;

    while(i>=0 && j>=0){
        int value1 = a[i];
        int value2 = b[j];
  
        int sum  = value1 + value2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);

        i--;
        j--;
    }

    while(i>=0){
        int sum  = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j>=0){
        int sum  = a[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    while(carry != 0){
        int sum  = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    return reverse(ans);

}


int main(){
   vector<int> a = {1,2,3,4};
   vector<int> b = {6};
   
   int n = a.size();
   int m = b.size();

   sumOfArray(a, n, b, m);
}