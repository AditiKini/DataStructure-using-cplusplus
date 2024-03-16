#include<iostream>
using namespace std;


char toLowerCase(char ch){
    if(islower(ch)){
        return ch;
    }
    else{
        return tolower(ch);
    }
}

bool checkPalindrome(string s, int len){
    
    int start = 0;
    int end = len - 1;

    
    while(start<=end){
        if(!isalnum(s[start])){
            start++;
            continue;
        }
        if(!isalnum(s[end])){
           end--;
           continue;
        }
        if(toLowerCase(s[start]) != toLowerCase(s[end])){
            return 0;
        }
        
        start ++;
        end--;
    }

    return 1;
}


int main(){
    string s;

    cout<<"Enter your name: ";
    getline(cin, s);

    int len = s.length();

    if(checkPalindrome(s, len)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    
}