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
    ListNode* rotateRight(ListNode* head, int k) {

        long long count = 0;
        ListNode *current = head;
        if(head == NULL || head->next==NULL){
            return head;
        }
        
        while(current != NULL){
            count++;
            current = current -> next;
        }
        
        k = k % count;
        if(k==0){
            return head;
        }
        
        

        
        while(k!=0)
        {
            ListNode *tail = head -> next;
            ListNode *prev = head;
            while(tail -> next != NULL ){
                tail = tail -> next;
                prev = prev -> next;
            }
            tail -> next = head;
            prev -> next = NULL; 
            k--;
            head = tail;

        }


        return head;
        
        
    }
};