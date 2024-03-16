#include<iostream>
#include<queue>
#include<stack>
using namespace std;


class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};


node* buildBinaryTree(node *root){
    
    cout<<"Enter the Data"<<endl;
    int data;
    cin>>data;

    root = new node(data);
    
    if(data == -1){
        return NULL;
    }

    cout<<"Insert the data at left of: "<<data<<endl;
    root -> left = buildBinaryTree(root -> left);
    cout<<"Insert the data at right of: "<<data<<endl;
    root -> right = buildBinaryTree(root -> right);

    return root;  

}

void buildLevelOrderTree(node* &root){
     
    queue<node*> q;
    cout<<"Enter the root data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
       node *temp = q.front();
       q.pop();

       cout<<"insert data for left"<<temp->data<<endl;
       int leftData;
       cin>>leftData;
       
       if(leftData != -1){
        temp -> left = new node(leftData);
        q.push(temp->left);
       }

       cout<<"insert data for right"<<temp->data<<endl;
       int rightData;
       cin>>rightData;

       if(rightData != -1){
         temp -> right = new node(rightData);
         q.push(temp->right);
       }
    }
}




void LevelOrderTraversal(node *root){
   
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data<<" ";

            if(temp -> left){
                q.push(temp->left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void reverseLevelOrderTraversal(node *root){
   queue<node*> q;
   stack<node*> st;

   q.push(root);

   while (!q.empty())
   {
      node *temp = q.front();
      q.pop();
      st.push(temp);

      if(temp -> right){
        q.push(temp -> right);
      }
      
      if(temp -> left){
        q.push(temp -> left);
      }
   }
   

   while (!st.empty())
   { 
      node *temp = st.top();
      cout<<temp -> data<<" ";
      st.pop();
   }

}


void inorder(node *root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
}

void preorder(node *root){
    if(root == NULL){
        return;
    }
    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(node *root){
    if(root == NULL){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
}


int main(){
    node *root = NULL;

    // buildLevelOrderTree(root);
    // LevelOrderTraversal(root);

    
    root = buildBinaryTree(root);
    LevelOrderTraversal(root);
    cout<<"========================="<<endl;

    
    reverseLevelOrderTraversal(root);
    cout<<"=============================="<<endl;
    
    inorder(root);
    cout<<"=============================="<<endl;
    
    preorder(root);
    cout<<"=============================="<<endl;

    postorder(root);

    


}