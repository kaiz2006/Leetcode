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
    int findmax(TreeNode* root) {
        if (root == NULL)
            return INT_MIN;
        return max(root->val,
                   max(findmax(root->left), findmax(root->right)));
    }

    int findmin(TreeNode* root) {
        if (root == NULL)
            return INT_MAX;
        return min(root->val,
                   min(findmin(root->left), findmin(root->right)));
    }

    int solve(TreeNode* root) {
        if (root == NULL)
            return 0;

        int mx = findmax(root);
        int mn = findmin(root);
        int ans = max(abs(root->val - mx),
                      abs(root->val - mn));
        return ans;
    }

    int maxAncestorDiff(TreeNode* root) {
        if (root == NULL)
            return 0;

        int ans = solve(root);
        int ans1 = maxAncestorDiff(root->left);
        int ans2 = maxAncestorDiff(root->right);

        return max(ans, max(ans1, ans2));
    }
};