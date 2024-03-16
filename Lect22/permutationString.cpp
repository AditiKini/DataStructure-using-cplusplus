#include<iostream>
using namespace std;

bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26; i++){
       if(a[i] != b[i])
         return 0;
    }
    return 1;
}

bool permutationString(string s1, string s2){

    int count1[26] ={0};
    int count2[26] ={0};

    //For string s1
    for(int i=0; i<s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    //First window => check for s2
    int i=0;
    int windowSize = s1.length();

    while ( i<windowSize && i<s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++; 
    }

    if(checkEqual(count1, count2))
      return 1;
    
    //If not fount in first window check for another.....
    while(i<s2.length()){

       char newChar = s2[i];
       int index = newChar - 'a';
       count2[index]++;

       char oldChar = s2[i-windowSize];
       index = oldChar - 'a';
       count2[index]--;

        if(checkEqual(count1, count2))
          return 1;
        
        i++;
    }
    
    return 0;
}

int main(){
    string s1 ="di";
    string s2 ="eidbaooo";

    if(permutationString(s1,s2))
       cout<<"true";
    else
       cout<<"false";
}