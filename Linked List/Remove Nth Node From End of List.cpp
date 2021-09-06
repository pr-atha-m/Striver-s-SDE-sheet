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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* curr  = head;
        for(int i=0;i<n;i++){
            if(curr == NULL){
                return NULL;
            }
            curr = curr->next;
        }
        
        ListNode* Nth_node = head;
        ListNode* prev_nth = NULL;
        // to delete nth_node from end we need to have hold of n-1'th node
        while(curr!=NULL){
            curr = curr->next;
            prev_nth = Nth_node;
            Nth_node = Nth_node -> next;
        }
        
        
        if(prev_nth == NULL){
        // if prev_nth == NULL this means we have to remove first node ,
        // so we have to change the head , thats why we handled this case separately.
                
        ListNode* temp = Nth_node;
        ListNode* new_head = temp->next;
        delete temp;
        return new_head;
            
        }
        else{
            
        ListNode* temp = Nth_node;
        prev_nth -> next = temp->next;
        delete temp;
        return head;
        }
       
        
        
        
    }
};
