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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return nullptr;

        int count = 0;
        for(ListNode* temp = head; temp != nullptr; temp = temp->next)
            count++;

        int mid = count / 2;

        ListNode* prev = head;
        for(int i = 0; i < mid - 1; i++)
            prev = prev->next;

        prev->next = prev->next->next;

        return head;
    }
};