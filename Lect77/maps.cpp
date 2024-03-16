#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
   unordered_map<string, int> mp;

  //Insertion

  //Way 1
   pair<string, int> pair1("aditi", 3);
   mp.insert(pair1);

   //Way 2
   pair<string, int> pair2 = make_pair("Kini", 1);
   mp.insert(pair2);

   //Way 3
   mp["Pappa"] = 5;
   mp["Pappa"] = 6;

   cout<<mp["Pappa"]<<endl;
   cout<<mp.at("aditi")<<endl;
   cout<<mp["Mummy"]<<endl;
   cout<<mp.at("Mummy")<<endl;

   cout<<mp.count("aditi")<<endl; //present
   cout<<mp.count("Bro")<<endl; //absent

   cout<<mp.size()<<endl;

   mp.erase("Mummy");

   cout<<mp.size()<<endl;

   for(auto i:mp){
    cout<<i.first<<" "<<i.second<<" "<<endl;
   }

   unordered_map<string, int> :: iterator it = mp.begin();

   while (it != mp.end())
   {
       cout<<it->first<<" "<<it->second<<endl;
       it++;
   }
   
}