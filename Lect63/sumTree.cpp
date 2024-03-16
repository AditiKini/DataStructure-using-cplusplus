class Solution
{
    public:
    pair<bool, int> isSumTreeFast(Node *root){
        
        if(root == NULL){
            pair<bool, int> p(true, 0);
            return p;
        }
        
        if(root -> left == NULL && root -> right == NULL){
            pair<bool, int> p(true, root->data);
            return p;
        }
        
        pair<bool,int> leftAns = isSumTreeFast(root -> left);
        pair<bool,int> rightAns = isSumTreeFast(root -> right);
        
        bool isLeftSubTree = leftAns.first;
        bool isRightSubTree = rightAns.first;
        
        int leftSum = leftAns.second;
        int rightSum = rightAns.second;
        
        bool val = root -> data == leftSum + rightSum;
        
        pair<bool, int> ans;
        
        if(isLeftSubTree && isRightSubTree && val){
            ans.first = true;
            ans.second = root -> data + leftSum + rightSum;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
    
    bool isSumTree(Node* root)
    {
        return isSumTreeFast(root).first;
         // Your code here
         
    }
};