class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int end = 0;
        
        while (temp != NULL) {
            end++;
            temp = temp->next;
        }

        if (n == end) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp = head;
        for (int i = 0; i < end - n - 1; i++) {
            temp = temp->next;
        }

        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

        return head;
    }
};
