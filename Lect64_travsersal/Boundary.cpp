class Solution {
private:
    void LeftTraversal(Node *root, vector<int> &ans){
        if((root == NULL) ||(root -> left == NULL && root->right == NULL)){
            return ;
        }
        
        ans.push_back(root->data);
        if(root->left)
           LeftTraversal(root->left, ans);
        else
            LeftTraversal(root->right, ans);
    }
    
    void LeafNode(Node *root, vector<int> &ans){
        if(root == NULL){
            return ;
        }
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return ;
        }
        
        LeafNode(root->left, ans);
        LeafNode(root->right, ans);
    }
    
    void RightTraversal(Node *root, vector<int> &ans){
         if((root == NULL) ||(root -> left == NULL && root->right == NULL)){
            return ;
        }
        
        if(root->right)
            RightTraversal(root->right, ans);
        else
            RightTraversal(root->left, ans);
        
        ans.push_back(root->data);
    }
    
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root == NULL)
           return ans;
         
        ans.push_back(root->data);
        
        LeftTraversal(root->left, ans);
        
        LeafNode(root->left, ans);
        LeafNode(root->right, ans);
    
        RightTraversal(root->right, ans);
        
        return ans;
        
        
    }
};