// Given 2 Arrays of Inorder and preorder traversal. The tree can contain duplicate elements. Construct a tree and print the Postorder traversal.

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution
{

public:
    // void createMapping (int in[], map<int, int> &nodeToIndex, int n){

    //     for(int i=0; i<n; i++){
    //         nodeToIndex[in[i]] = i;
    //     }
    // }

    int findPosition(int in[], int element, int inStart, int inEnd)
    {
        for (int i = inStart; i <= inEnd; i++)
        {
            if (in[i] == element)
                return i;
        }
        return -1;
    }

    Node *solve(int in[], int pre[], int &preIndex, int inStart,
                int inEnd, int n)
    {

        if (inStart > inEnd || preIndex >= n)
        {
            return NULL;
        }

        int element = pre[preIndex++];
        Node *root = new Node(element);
        // int position = nodeToIndex[element];
        int position = findPosition(in, element, inStart, inEnd);

        root->left = solve(in, pre, preIndex, inStart, position - 1, n);
        root->right = solve(in, pre, preIndex, position + 1, inEnd, n);

        return root;
    }

    Node *buildTree(int in[], int pre[], int n)
    {
        // Code here
        int preIndex = 0;
        //   map<int, int> nodeToIndex;
        //   createMapping(in, nodeToIndex, n);
        Node *ans = solve(in, pre, preIndex, 0, n - 1, n);
        return ans;
    }
};