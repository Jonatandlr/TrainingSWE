// Difficult : Easy
// Exercise: https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

#include <iostream>
using namespace std;

//   Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class solution
{
public:
    int maxDepth (TreeNode* root){
        if(root==NULL) return 0;
        int izq=maxDepth(root->left);
        int der=maxDepth(root->right);
        return max(izq,der)+1;
    }
};

// code driver
int main()
{
    solution sol;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20, new TreeNode(15), new TreeNode(7));

    cout << sol.maxDepth(root)<< endl;//return 3
    return 0;
}
