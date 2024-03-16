#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+ n - i;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*
1 
2 3 
4 5 6 
7 8 9 10 

int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}
*/


/*
AAAA
BBBB
CCCC
DDDD

int i=1;
char ch='A';
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<ch;
        j++;
    }
    ch+=1;
    cout<<endl;
    i++;
}

int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
    char ch = 'A' + i - 1; 
    cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE

 int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
    char ch = 'A' + j - 1; 
    cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
A B C 
D E F 
G H I

int i=1; 
char ch='A';
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<ch<<" ";
        ch=ch+1;
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*

A 
B B 
C C C 


int i=1;
char ch='A';
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<ch<<" ";
        j++;
    }
    ch=ch+1;
    cout<<endl;
    i++;
}

int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch='A' + i - 1;
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
*/

/*

A 
B C 
D E F
G H I J

int i=1;
char ch='A';
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<ch<<" ";
        ch++;
        j++;
    }
    cout<<endl;
    i++;
    }
*/

/*
A
B C
C D E
D E F G

int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch ='A'+i+j-2;
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

*/

/*
D
C D
B C D
A B C D

int i=1;
while(i<=n){
    int j=1;
    char ch='A'+ n - i;
    while(j<=i){
        cout<<ch<<" ";
        ch=ch+1;
        j++;
    }
    cout<<endl;
    i++;
}

*/