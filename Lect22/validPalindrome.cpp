#include<iostream>
using namespace std;

/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
and removing all non-alphanumeric characters, it reads the same forward and backward. 
Alphanumeric characters include letters and numbers. Given a string s, return true if it 
is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

*/

char Valid(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return ch;
    }
    return false;
}

char toLowerCase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(string a){
    
    int s = 0;
    int e = a.length() - 1;

    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }

    return 1;
}


bool isPalindrome(string s){

    //check for valid character
    string temp = "";
    for(int i = 0; i<s.length(); i++){
        if(Valid(s[i])){
           temp.push_back(s[i]);
        }
    }

    //convert string into lowercase
    for(int i=0; i<temp.length(); i++){
        temp[i] = toLowerCase(temp[i]);
    }

    //check palindrome
    return checkPalindrome(temp);
}
int main()
{
   string s;
    
   cout<<"Enter the string: ";
   getline(cin, s);

   if(isPalindrome(s)){
    cout<<"True";
   }
   else{
    cout<<"False";
   }
}