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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count = 0;
        ListNode* curr = head;

        
        while(curr){
            count++;
            curr = curr->next;
        }

        
        if(n == count){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        curr = head;
        int steps = count - n - 1;

        while(steps--){
            curr = curr->next;
        }

        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;

        return head;
    }
};
