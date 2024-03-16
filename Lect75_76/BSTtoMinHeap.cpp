#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Node{
    public:
          
          int data;
          Node *left;
          Node *right;


          Node(int val){
            this->data = val;
            this->left = NULL;
            this->right= NULL;
          }
};


Node* BinarySearchTree(Node* &root, int d){

    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root -> data){
        root->right = BinarySearchTree(root->right, d);
    }
    else
    {
        root->left = BinarySearchTree(root->left, d);
    }

    return root;
}

void inorder(Node* root, vector<int> &arr){

    if(root == NULL)
       return;
    
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

void BSTMinHeap(Node* &root, vector<int> &arr,  int* i){
    if(root == NULL)
      return ;
    
    root->data = arr[++*i];
    BSTMinHeap(root->left, arr, i);
    BSTMinHeap(root->right, arr, i);
}

void convertIntoMinHeap(Node* &root){
    
    vector<int> arr;
    int i=-1;

    inorder(root, arr);

    BSTMinHeap(root, arr, &i);
}

void preorder(Node* &root){
    if(root==NULL)
      return ;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

int main(){
    Node* root = NULL;
    BinarySearchTree(root, 4);
    BinarySearchTree(root, 2);
    BinarySearchTree(root, 6);
    BinarySearchTree(root, 1);
    BinarySearchTree(root, 3);
    BinarySearchTree(root, 5);
    BinarySearchTree(root, 7);
    
    convertIntoMinHeap(root);
    cout<<"Min Heap is"<<endl;
    preorder(root);
}