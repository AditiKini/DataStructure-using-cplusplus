// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//           int data;
//           Node* right;
//           Node* left;

//           Node(int d){
//               this -> data = d;
//               this -> right = NULL;
//               this -> left = NULL;
//           }
// };

// Node* InsertToBST(Node* root, int d){

//     if(root == NULL){
//         root = new Node(d);
//         return root;
//     }

//     if(d > root->data)
//       root -> right = InsertToBST(root -> right, d);
//     else
//       root -> left = InsertToBST(root -> left, d);

//     return root;
// }

// void takeInput(Node* &root){

//     int data;
//     cin>>data;

//     while (data != -1)
//     {
//        root = InsertToBST(root, data);
//        cin>>data;
//     }

// }

// void LevelOrderTraversal(Node *root){

//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         if(temp == NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<temp -> data<<" ";

//             if(temp -> left){
//                 q.push(temp->left);
//             }

//             if(temp -> right){
//                 q.push(temp -> right);
//             }
//         }
//     }
// }

// bool Search(Node* &root, int x){

//     Node* temp = root;
//     while (temp != NULL)
//     {
//         if(temp->data == x)
//            return true;

//         if(temp -> data > x)
//            temp = temp ->left;
//         else
//            temp = temp -> right;
//     }

//     return false;
// }

// Node* minVal(Node* root){

//     Node* temp = root;

//     while (temp ->left != NULL)
//     {
//         temp = temp ->left;
//     }

//     return temp;
// }

// Node* maxVal(Node* root){

//     Node* temp = root;

//     while (temp ->right != NULL)
//     {
//         temp = temp ->right;
//     }

//     return temp;
// }

// int main(){
//     Node* root = NULL;

//     cout<<"Enter data to build BST: "<<endl;
//     takeInput(root);

//     cout<<"Level order traversal: "<<endl;
//     LevelOrderTraversal(root);

//     if(Search(root, 3)){
//         cout<<"Found";
//     }
//     else
//        cout<<"Not Found";

//     cout<<"min value in BST is : "<<minVal(root)->data<<endl;
//     cout<<"max value in BST is : "<<maxVal(root)->data<<endl;

// }

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *BinarySearchTree(Node *root, int d)
{

    // base case
    if (root == NULL)
    {
        // create a new node
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = BinarySearchTree(root->right, d);
    }
    else
    {
        root->left = BinarySearchTree(root->left, d);
    }

    return root;
}

void LevelOrderTraversal(Node *&root)
{

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

bool Search(Node *root, int x)
{

    // base case
    if (root == NULL)
    {
        return false;
    }

    if (root->data == x)
    {
        return true;
    }

    if (x > root->data)
    {
        return Search(root->right, x);
    }
    else
    {
        return Search(root->left, x);
    }
}

bool SearchElement(Node *root, int d)
{

    Node *temp = root;

    while (temp != NULL)
    {
        if (temp->data == d)
        {
            return true;
        }

        if (temp->data > d)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }

    return false;
}

void TakeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = BinarySearchTree(root, data);
        cin >> data;
    }
}

Node *minVal(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxVal(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deleteFromBST(Node *root, int val)
{

    if (root == NULL)
        return root;

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // 1 child:- left
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // 1 child:- right
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int min = minVal(root->right)->data;
            root->data = min;
            root->right = deleteFromBST(root->right, min);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

void inorder(Node *root)
{

    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int kthSmallest(Node *root, int k, int &i)
{
    stack<Node *> st;
    Node *curr = root;

    while (!st.empty() || curr != NULL)
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            curr = st.top();
            st.pop();
            i++;

            if (i == k)
            {
                return curr->data;
            }

            curr = curr->right;
        }
    }
}

int kthLargest(Node *root, int k, int &i)
{

    stack<Node *> st;
    Node *curr = root;

    while (curr != NULL || !st.empty())
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->right;
        }
        else
        {

            curr = st.top();
            st.pop();
            i++;

            //calculate len(tree) - kth + 1
            if (i == k)
            {
                return curr->data;
            }

            curr = curr->left;
        }
    }
}

int main()
{
    Node *root = NULL;
    int k = 5;
    int i = 0;
    TakeInput(root);
    LevelOrderTraversal(root);
    // cout<<Search(root, 27)<<endl;
    // cout<<SearchElement(root, 77)<<endl;

    // deleteFromBST(root, 60);

    // LevelOrderTraversal(root);

    // int ans = kthSmallest(root, k, i);
    // cout << ans;

    // int ans = kthLargest(root, k, i);
    // cout << ans;
}