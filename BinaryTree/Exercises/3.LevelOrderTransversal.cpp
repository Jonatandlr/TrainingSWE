// dificult: Little Harder
// Exercise: https://leetcode.com/problems/binary-tree-level-order-traversal/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (root == NULL)
            return result;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> currentLevel;
            for (int i = 0; i < size; i++)
            {
                TreeNode *current = q.front();
                q.pop();
                currentLevel.push_back(current->val);
                if (current->left != NULL)
                    q.push(current->left);
                if (current->right != NULL)
                    q.push(current->right);
            }
            result.push_back(currentLevel);
        }
        return result;
    }
};

// code driver
int main()
{
    Solution sol;
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20, new TreeNode(15), new TreeNode(7));

    vector<vector<int>> result = sol.levelOrder(root);
    for (auto i : result)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
