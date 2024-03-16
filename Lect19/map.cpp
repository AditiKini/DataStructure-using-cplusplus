#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;

    m[1]="Aditi";
    m[4]="Parija";
    m[2]="Akshata";
    m[6]="Harshad";
    m[5]="Rushi";
    m[3]="Sahil";

    m.insert({7,"Sneha"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"4 is present or not: "<<m.count(4)<<endl;

    m.erase(5);
    m.erase(4);

    cout<<"Atfer erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(2);
    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}