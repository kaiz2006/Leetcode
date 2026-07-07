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
    int pairSum(ListNode* head) {
        vector<int> value;

        ListNode* temp= head;
        int ans = INT_MIN;
        while(temp != NULL){
            value.push_back(temp->val);
            temp=temp->next;
        }
        if(value.size()==2){
            return value[0]+value[1];
        }else{
            for(int i =0;i<value.size();i++){
                if(0 <= i <= (value.size()/ 2) - 1){
                    ans=max(ans,value[i] + value[value.size()-1-i]);
                }
            }
        }
        return ans;

    }
};