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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            if (st.count(temp->val)) {
                if (temp->next == NULL || !st.count(temp->next->val)) {
                    ans++;
                }
            }

            temp = temp->next;
        }

        return ans;
    }
};