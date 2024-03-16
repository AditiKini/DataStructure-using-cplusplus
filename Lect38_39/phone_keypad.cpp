#include<iostream>
#include<vector>
#include<string>
using namespace std;

void combinationString(string digit, vector<string>& ans, string output, int index, string mapping[]){
    //base case
    if(index >= digit.length()){
        ans.push_back(output);
        return ;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        combinationString(digit, ans, output, index+1, mapping);
        output.pop_back();
    }
}

int main(){
    //given
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","xyzw"};
    string digit = "39"; 
    string output ="";
    vector<string> ans;
    int index = 0;

     
    combinationString(digit, ans, output, index, mapping);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
   
}
