/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void group(vector<int>& ans) {
        vector<int> temp;

        for (int i = 0; i < ans.size(); i += 2) {
            temp.push_back(ans[i]);
        }

        for (int i = 1; i < ans.size(); i += 2) {
            temp.push_back(ans[i]);
        }

        ans = temp;
    }

    ListNode* oddEvenList(ListNode* head) {
        vector<int> ans;

        ListNode* temp = head;

        while (temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        group(ans);

        temp = head;

        for (int i = 0; i < ans.size(); i++) {
            temp->val = ans[i];
            temp = temp->next;
        }

        return head;
    }
};