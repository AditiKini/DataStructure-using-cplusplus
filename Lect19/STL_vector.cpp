#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;

    //5 is size and 1 is initialized.
    vector<int> a(5,1);
    cout<<"Capacity: "<<a.capacity()<<endl;
    vector<int> last(a);
    cout<<"Capacity: "<<last.capacity()<<endl;
    cout<<"Print last: ";
    for(int i:last){
        cout<<i<<" ";
    }    
    cout<<endl;


    cout<<"Capacity: "<<v.capacity()<<endl;

    //Add the Element into vector
    v.push_back(5);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
    v.push_back(4);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;
    cout<<"Empty or not: "<<v.empty()<<endl;
    cout<<"First Element: "<<v.front()<<endl;
    cout<<"Last Elememt: "<<v.back()<<endl;

   sort(v.begin(), v.end());

    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;
    
    cout<<"Before Pop: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"Atfer Pop: ";
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"Before Erase Size: "<<v.size()<<endl;
    v.clear();
    cout<<"After Size: "<<v.size()<<endl;
}