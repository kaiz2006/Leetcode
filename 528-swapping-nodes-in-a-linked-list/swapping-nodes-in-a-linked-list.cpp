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

    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL) return NULL;

        int val1 = 0;
        int val2 = 0;

        int count = 0;
        ListNode* temp = head;
        int originalK = k;

        while(temp != NULL) {
            count++;

            if(count == k) {
                val1 = temp->val;
            }

            temp = temp->next;
        }
        int pos = count - k + 1;
        int i = 1;
        temp = head;

        while(i < pos) {
            temp = temp->next;
            i++;
        }

        val2 = temp->val;
        i = 1;
        temp = head;

        while(i < k) {
            temp = temp->next;
            i++;
        }

        temp->val = val2;
        i = 1;
        temp = head;

        while(i < pos) {
            temp = temp->next;
            i++;
        }

        temp->val = val1;

        return head;
    }
};