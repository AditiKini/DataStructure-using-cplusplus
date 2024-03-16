/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
TreeNode<int>* normaltoBST(int s, int e, vector<int> &inorderVal){
   
   if(s>e){
       return NULL;
   }

   int mid = (s+e)/2;
   TreeNode<int>* root = new TreeNode<int>(inorderVal[mid]);
   root->left = normaltoBST(s, mid-1,inorderVal);
   root->right = normaltoBST(mid+1, e, inorderVal);
   return root;
}


void inorder(TreeNode<int>* root, vector<int> &inorderVal){
    if(root == NULL)
      return ;
    
    inorder(root->left, inorderVal);
    inorderVal.push_back(root->data);
    inorder(root->right, inorderVal);
    
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int> inorderVal;
    inorder(root, inorderVal);

   return normaltoBST(0, inorderVal.size()-1, inorderVal);
}
