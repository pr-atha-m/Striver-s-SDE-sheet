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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int n1 = 0;
        ListNode* curr = headA;
        for(int i=0;curr!=NULL;i++){
            n1++;
            curr = curr->next;
        }
        
        int n2 = 0;
        curr = headB;
        for(int i=0;curr!=NULL;i++){
            n2++;
            curr = curr->next;
        }
        
        ListNode* curr1 = NULL;
        if(n1>=n2){
            curr = headA;
            for(int i=0;i<n1-n2;i++){
                curr = curr->next;
            }
            
            curr1 = headB;
            
            
        }
        else{
            curr = headB;
            for(int i=0;i<n2-n1;i++){
                curr = curr->next;
            }
            
            
            curr1 = headA;
        }
        
        while(curr!=NULL || curr!=NULL){
            if(curr== curr1){
              return curr;    
            }
            
            curr = curr->next;
            curr1 = curr1->next;
        }
        
        return NULL;
  
    }
};
