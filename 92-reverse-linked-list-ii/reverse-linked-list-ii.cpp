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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        vector<int> a;

        while(temp!=NULL){
            a.push_back(temp->val);
            temp=temp->next;
        }
        while(left<right){
            swap(a[left-1],a[right-1]);
            left++;
            right--;
        }

        ListNode* curr = head;
        int i = 0;

        while (curr != NULL) {
            curr->val = a[i++];
            curr = curr->next;
        }

        return head;

    }
};