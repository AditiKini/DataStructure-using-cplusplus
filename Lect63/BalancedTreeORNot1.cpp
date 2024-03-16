class Solution{
    private:
    int height(struct Node* node){
        // code here 
        if(node == NULL){
            return 0;
        }
        
        int leftHeight = height(node -> left);
        int rightHeight = height(node -> right);
        
        int h = max(leftHeight, rightHeight) + 1;
        
        return h;
    }
    
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root == NULL){
            return true;
        }
        
        bool left = isBalanced(root -> left);
        bool right = isBalanced(root -> right);
        
        bool diff = abs(height(root -> left) - height(root->right)) <=1;
        
        if(left && right && diff){
            return true;
        }
        else{
            return false;
        }
    }
};
