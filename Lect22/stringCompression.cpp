#include<iostream>
#include<vector>
using namespace std;

int stringCompression(vector<char> chars){
    int i=0;
    int index=0;
    int n=chars.size();

    while (i<n)
    {
        int j=i+1;
        while (j<n && chars[i] == chars[j])
        {
            j++;
        }

        chars[index++]=chars[i];
        int count = j-i;

        if(count > 1){
            string countStr = to_string(count);
            for(char ch: countStr){
                chars[index++]=ch;
            }
        }
        i=j;
    }

    for(char ch : chars){
        cout<<ch<<" ";
    }
    cout<<endl;
    return index;
}

int main(){
    vector<char> chars = {'a','a','b','b','b','c','c'};

    cout<<stringCompression(chars);
    
}