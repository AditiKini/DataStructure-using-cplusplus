#include<iostream>
using namespace std;

int main(){
    int amount=1330;
    int RS100,RS50,RS20,RS1;
    switch (1)
    {
    case 1:
            RS100 = amount/100;
            cout<<RS100<<" Notes of 100 Rs."<<endl;
            amount = amount % 100;
    case 2:
            RS50 = amount/50;
            cout<<RS50<<" Notes of 50 Rs."<<endl;
            amount = amount % 50;
    case 3:
            RS20 = amount/20;
            cout<<RS20<<" Notes of 20 Rs."<<endl;
            amount = amount % 20;

    case 4:
            RS1 = amount/1;
            cout<<RS1<<" Notes of 1 Rs."<<endl;
            amount = amount % 1;
    }
}