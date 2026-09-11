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
    int maxLevelSum(TreeNode* root) {
        vector<int> result;
        if (!root) return 0;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            int levelSum = 0;
            for (int i = 0; i < levelSize; i++) {
                TreeNode* curr = q.front();
                q.pop();

                levelSum += curr->val;

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            result.push_back(levelSum);
        }
        int maxi = INT_MIN;
        int idx = 0;
        for(int i =0;i<result.size();i++){
            if(result[i] > maxi){
                maxi = result[i];
                idx = i;
            }
        }
        return idx + 1;
    }
};