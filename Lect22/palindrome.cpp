#include<iostream>
using namespace std;


char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(char name[], int len){
    
    int s = 0;
    int e = len - 1;

    while(s<=e){
        if(toLowerCase(name[s]) != toLowerCase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }

    return 1;
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
         count++;
    }
    return count;
}


int main(){
    char name[10];

    cout<<"Enter your name: ";
    cin>>name;

    int len = getLength(name);
    cout<<"Length is : "<<len;


    cout<<endl<<checkPalindrome(name, len);
}