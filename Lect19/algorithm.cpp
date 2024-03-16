#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(6);

    //1 3 4 4 4 6

    cout<<"Finding 6: "<<binary_search(v.begin(),v.end(),4)<<endl;

    cout<<"lower bound: "<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
    cout<<"upper bound: "<<upper_bound(v.begin(),v.end(),2)-v.begin()<<endl;

    cout<<"lower bound: "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"upper bound: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

   string str = "abcd";
   reverse(str.begin(),str.end());
   cout<<str<<endl;

   rotate(v.begin(),v.begin()+1,v.end());
   for(int i:v){
    cout<<i<<" ";
   
   }
}