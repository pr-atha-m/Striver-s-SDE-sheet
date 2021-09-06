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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int flag = 0;
        ListNode* head = NULL;
        ListNode* curr = NULL;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int sum = 0;
            if(l1){
                sum+= l1->val;
                l1 = l1->next;
            }
            
            if(l2){
                sum+= l2->val;
                l2 = l2->next;
            }
            if(carry){
                  sum+= carry;
            }
          
            if(flag == 0){
                flag = 1;
                head = new ListNode(sum%10);
                curr = head;
                
            }
            else{
                curr->next = new ListNode(sum%10);
                curr = curr->next;
            }
             carry = sum/10;  
            
        }
        return head;
    }
};
