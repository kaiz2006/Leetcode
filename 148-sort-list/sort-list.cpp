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
    ListNode* sortList(ListNode* head) {
        
        vector<int> temp;
        ListNode* m = head;

        while(m !=NULL){
            temp.push_back(m->val);
            m=m->next;
        }        
        sort(temp.begin(),temp.end());

        ListNode* curr = head;
        int i = 0;

        while (curr != NULL) {
            curr->val = temp[i++];
            curr = curr->next;
        }

        return head;

        
    }
};