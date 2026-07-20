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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> temp;
        
        ListNode* t = head;
        while(t!=NULL){
            temp.push_back(t->val);
            t=t->next;
        }
        int n = temp.size();
        for(int i =0;i<n;i++){
            int c = 0;
            for(int j = i+1;j<n;j++){
                if(temp[j] > temp[i]){
                    c=temp[j];
                    break;
                }
            }
            temp[i]=c;
        }
        return temp;
    }
};