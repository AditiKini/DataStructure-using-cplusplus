#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;
    
        TrieNode(char ch){
            data = ch;
            for(int i=0; i<26; i++){
                children[i] = NULL;
            }

            isTerminal = false;
        }
};

class Trie{
    public:
        TrieNode* root;

        Trie(){
            root = new TrieNode('\0');
        }
        
        //Insertion.....
        void insertChar(TrieNode* root, string word){
            if(word.length() == 0){
                root->isTerminal = true;
                return ;
            }

            int index = word[0] - 'a';
            TrieNode* child;

            if(root->children[index] != NULL){
                //char is present
                child = root->children[index];
            }
            else{
                //char is not present
                child = new TrieNode(word[0]);
                root->children[index] = child;
            }

            insertChar(child, word.substr(1));
        }

        void insertWord(string word){
            insertChar(root, word);
        }

        //searching....
        bool searchChar(TrieNode* root, string word){
             
             if(word.length() == 0){
                return root->isTerminal;
             }

             int index = word[0] - 'a';
             TrieNode* child;

             if(root->children[index] != NULL){
                child = root->children[index];
             }
             else{
                return false;
             }

             return searchChar(child, word.substr(1));
        }


        bool searchWord(string word){
            return searchChar(root, word);
        }

        bool prefixUtil(TrieNode* root, string word){
             if(word.length() == 0){
                return true;
             }

             int index = word[0] - 'a';
             TrieNode* child;

             if(root->children[index] != NULL){
                child = root->children[index];
             }
             else{
                return false;
             }

             return prefixUtil(child, word.substr(1));
        }

        bool prefixWord(string prefix){
            return prefixUtil(root, prefix);
        }


};

int main(){
    Trie *t = new Trie();

    t->insertWord("aditi");
    t->insertWord("kini");
    t->insertWord("apple");

    cout<<"1 means present 0 means absent: "<<t->searchWord("aditi")<<endl;

    cout<<t->prefixWord("ap")<<endl;
}





