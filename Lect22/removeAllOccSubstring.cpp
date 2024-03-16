#include<iostream>
using namespace std;


void remove(string s, string part){
   
   
   while(s.length() != 0 && s.find(part) < s.length()){
     s.erase(s.find(part), part.length());
   }
}


int main(){
    string s = "daabcbaabcbc";
    string substring = "abc";
    remove(s, substring);
}

//find(substring), find(substring, startpos) => It find first(leftmost) occurrences of substring and return index of start of substring.
//erase(start, length)  => It start erasing from start pos till then length specified. return the updated string.
