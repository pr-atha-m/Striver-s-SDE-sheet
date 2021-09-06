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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        if(l1!=NULL && l2!=NULL){
        if(l1->val >= l2->val){
            head = l2;
            l2 = l2->next;
        }
        else{
            head = l1;
            l1 = l1->next;
        }
        }
        else if(l1!=NULL){
            head = l1;
            l1 = l1->next;
        }
        else if(l2!=NULL){
            head = l2;
            l2 = l2->next;
        }
        else{
            head = NULL;
        }
        
        ListNode* curr = head;
        
        while(l1!=NULL && l2!=NULL){
            
            if(l1->val>=l2->val){
                curr->next = l2;
                curr = curr->next;
                l2 = l2->next;
            }
            else{
                curr->next = l1;
                curr = curr->next;
                l1 = l1->next;
            }
        }
        
        while(l1!=NULL){
             curr->next = l1;
             curr = curr->next;
            l1 = l1->next;
        }
        
        while(l2!=NULL){
            curr->next = l2;
            curr = curr->next;
            l2 = l2->next;
        }
        
        
        return head;
        
        
        
        
        
        
    }
};
