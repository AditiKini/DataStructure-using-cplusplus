#include<iostream>
using namespace std;

void reverseString(char name[], int size){
    int s = 0;
    int e = size - 1;

    while (s<=e)
    { 
        swap(name[s++], name[e--]);
    }
    
    cout<<"Reverse String : "<<name;
}

int getLength(char name[]){
    int count =0;
    for(int i=0; name[i]!= '\0'; i++){
        count++;
    }

    return count;
}

int main(){
    char name[10];

    cout<<"Enter the string which you want to reverse:  ";
    cin>>name;

    int len = getLength(name);

    reverseString(name, len);
}