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

    int count(TreeNode* root, long long currentSum) {
        if (!root) return 0;
        int ans = 0;
        if (currentSum == root->val) {
            ans++;
        }
        ans += count(root->left, currentSum - root->val);
        ans += count(root->right, currentSum - root->val);

        return ans;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;
        return count(root, targetSum) + 
               pathSum(root->left, targetSum) + 
               pathSum(root->right, targetSum);
    }
};