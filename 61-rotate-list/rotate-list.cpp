class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        int len = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            len++;
            temp = temp->next;
        }

        k %= len;

        while (k--) {
            ListNode* temp = head;
            ListNode* temp2 = NULL;

            while (temp->next != NULL) {
                temp2 = temp;
                temp = temp->next;
            }

            temp->next = head;
            temp2->next = NULL;
            head = temp;
        }

        return head;
    }
};