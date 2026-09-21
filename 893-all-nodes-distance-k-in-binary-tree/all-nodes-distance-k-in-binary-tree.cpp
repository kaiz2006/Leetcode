/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    void buildParentMap(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent) {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();

            if (curr->left) {
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }

    void dfs(TreeNode* curr, int k, unordered_map<TreeNode*, TreeNode*>& parent,
             unordered_map<TreeNode*, bool>& visited, vector<int>& ans) {
        if (!curr || visited[curr]) return;

        visited[curr] = true;

        if (k == 0) {
            ans.push_back(curr->val);
            return;
        }
        if (curr->left && !visited[curr->left]) {
            dfs(curr->left, k - 1, parent, visited, ans);
        }
        if (curr->right && !visited[curr->right]) {
            dfs(curr->right, k - 1, parent, visited, ans);
        }
        if (parent.count(curr) && !visited[parent[curr]]) {
            dfs(parent[curr], k - 1, parent, visited, ans);
        }
    }

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent;
        buildParentMap(root, parent);

        unordered_map<TreeNode*, bool> visited;
        vector<int> ans;

        dfs(target, k, parent, visited, ans);

        return ans;
    }
};