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
    ListNode* partition(ListNode* head, int x) {
        vector<int> v;

        ListNode* temp = head;

        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        int idx = 0;

        while (idx < v.size() && v[idx] < x) {
            idx++;
        }

        for (int i = idx; i < v.size(); i++) {
            if (v[i] < x) {
                rotate(
                    v.begin() + idx,
                    v.begin() + i,
                    v.begin() + i + 1
                );

                idx++;
            }
        }

        temp = head;

        for (int i = 0; i < v.size(); i++) {
            temp->val = v[i];
            temp = temp->next;
        }

        return head;
    }
};