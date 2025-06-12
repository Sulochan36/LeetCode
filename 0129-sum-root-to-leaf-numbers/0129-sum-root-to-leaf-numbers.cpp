/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root, int currentSum) {
        if (root == NULL) return 0;

        currentSum = currentSum * 10 + root->val;

  
        if (root->left == NULL && root->right == NULL) {
            return currentSum;
        }

        
        return dfs(root->left, currentSum) + dfs(root->right, currentSum);
    }

    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};
