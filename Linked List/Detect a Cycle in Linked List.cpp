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
    bool hasCycle(ListNode *head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        do{
            if(fast == NULL || fast->next==NULL){
                return 0;
            }
            fast = fast->next->next;
            slow = slow->next;
            
        }while(slow!=fast);
            
            
            return 1;
        
    }
};
