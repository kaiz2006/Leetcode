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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> mp;
        vector<int> ans;
        ListNode* temp = head;
        while(temp!=NULL){
            mp[temp->val]++;
            temp=temp->next;
        }
        for(auto &it:mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int i = 0; i < ans.size(); i++) {
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }

        return dummy->next;
    }
};