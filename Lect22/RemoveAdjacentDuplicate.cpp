#include <iostream>
#include<stack>
#include<string>
#include <algorithm> 
using namespace std;

// void removeAdjDuplicate(string s)
// {

//     bool duplicate = true;

//     while (duplicate)
//     {
//         int i = s.length() - 1;
//         duplicate = false;

//         while (i >= 0)
//         {
//             if (s[i] == s[i - 1])
//             {
//                 s.erase(i, 1);
//                 s.erase(i - 1, 1);
//                 i = i - 2;
//                 duplicate = true;
//             }
//             else
//             {
//                 i--;
//             }
//         }
//     }

//     cout << s;
// }


void removeAdjDuplicate(string s){
    stack<char> charstack;

    for(char c: s){
        if(!charstack.empty() && c == charstack.top()){
            charstack.pop();
        }
        else{
            charstack.push(c);
        }
    }

    string res = "";
    while(!charstack.empty()){
        res+=charstack.top();
        charstack.pop();
    }
    reverse(res.begin(), res.end());
    cout<<res;
}
int main()
{
    string s = "abbadcc";
    removeAdjDuplicate(s);
}