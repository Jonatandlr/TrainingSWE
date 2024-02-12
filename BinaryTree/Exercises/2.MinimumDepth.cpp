// Difficult : Easy
// Exercise: https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

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
    int minDepth(TreeNode* root) {
        if(root==NULL){return 0;};
        int izq=minDepth(root->left);
        int der=minDepth(root->right);
        if(izq==0||der==0){return max(izq,der)+1;}else{
            return min(izq,der)+1;
        }
    }
};

// code driver
int main()
{
    solution sol;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20, new TreeNode(15), new TreeNode(7));

    cout << sol.minDepth(root)<< endl;//return 2
    return 0;
}