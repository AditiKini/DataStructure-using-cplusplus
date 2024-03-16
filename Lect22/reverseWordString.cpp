#include<iostream>
using namespace std;

/*
   
*/

string reverseString(string& str){
    int s = 0;
    int e = str.length() - 1;

    while (s<=e)
    { 
        swap(str[s++], str[e--]);
    }
    
    return str;
}


void reverseWordString(string& s){
     string word;
     string reversed;

     for(char c : s){
        if(c != ' '){
            word += c;
        }
        else{
            reversed += reverseString(word) + ' ';
            word = ' ';
        }
     }
    //last word
    reversed += reverseString(word);
    cout<<reversed;
}


int main(){
    string s;

    cout<<"Enter the string: ";
    getline(cin, s);
    
    reverseWordString(s);
   
}