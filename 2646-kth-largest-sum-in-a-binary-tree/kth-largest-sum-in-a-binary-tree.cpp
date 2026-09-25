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
    using llo = long long;

    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root == NULL){
            return -1;
        }

        vector<llo> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            llo size = q.size();
            llo sum = 0;
            for(int i =0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();

                sum+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(sum);
        }
        if(ans.size() < k){
            return -1;
        }
        ranges::sort(ans);
        int n = ans.size();
        return ans[n-k];
    }
};