class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Use dummy head since we may have to remove the head too
        ListNode *dummyHead = new ListNode(0);
        dummyHead->next = head;
        
        ListNode *slow = dummyHead;
        ListNode *fast = dummyHead;
        
        // Move fast pointer n step ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        // Travel untill reach the end of the list
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Remove the item behind slow pointer
        slow->next = slow->next->next;
        
        return dummyHead->next;
    }
};