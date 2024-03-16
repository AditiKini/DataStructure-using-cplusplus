#include<iostream>
using namespace std;

/*

void replaceSpaces(string s){
    string word;
    string new_string;
    
    for(char c:s){
        if(c != ' '){
            word+=c;
        }
        else{
            new_string += word + "@40";
            word = "";
        }
    }
    new_string += word;
    cout<<new_string;
}

*/

void replaceSpaces(string str){
    string temp = "";

    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }

    cout<<temp;
}


int main(){
    string s;
    getline(cin, s);

    replaceSpaces(s);
}