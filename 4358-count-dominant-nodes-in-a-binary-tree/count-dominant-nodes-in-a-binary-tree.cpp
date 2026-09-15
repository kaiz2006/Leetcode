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

    int solve(TreeNode* root , int X){
        if(root == NULL){
            return 1;
        }
        if(root->val > X){
            return 0;
        }

        return solve(root->left,X) && solve(root->right,X);
    }

    int countDominantNodes(TreeNode* root) {    
        if(root == NULL) return 0;
        int X = root->val;
        int ans = solve(root,X);
        int ans1 = countDominantNodes(root->left);
        int ans2 = countDominantNodes(root->right);

        return ans+ans1+ans2;
    }
};