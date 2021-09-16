/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        do{
            if(fast == NULL || fast->next == NULL){
                return NULL;
            }
            
            slow = slow->next;
            fast = fast->next->next;
        }while(slow!=fast);
        
        
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        
        return slow;
    }
};
