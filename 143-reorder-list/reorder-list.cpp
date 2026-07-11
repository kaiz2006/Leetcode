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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<int> nums;
        vector<int> ans;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int i =0;
        int j =nums.size()-1;
        while (i <= j) {
            if (i == j) {
                ans.push_back(nums[i]);
            } else {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
            }
            i++;
            j--;
        }
        temp=head;
        for(int i =0;i<nums.size();i++){
            temp->val = ans[i];
            temp=temp->next;
        }
    }
};