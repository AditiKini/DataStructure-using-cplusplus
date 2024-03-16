#include<iostream>
using namespace std;

void getMaxOccuringChar(string s){

    int arr[26] = {0};

    for(char c: s){
        int index = 0;
        index = c - 'a';
        arr[index]++;
    }
    
    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char answer = 'a'+ans;
    cout<<answer;
}

int main(){
    string s;
    getline(cin, s);

    getMaxOccuringChar(s);
}

//Time complexity:- O(n)
//Space complexity:- O(1)