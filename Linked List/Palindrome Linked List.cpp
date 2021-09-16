class Solution {
public:
    ListNode* reverse(ListNode* head){
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=NULL){
            ListNode* curr_next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = curr_next;
            
        }
        
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
		//using fast and slow pointers to find middle of the linked list
        while(fast!=NULL && fast->next!=NULL){
            
            fast = fast->next->next;
            slow = slow->next;
        }
        
        
        ListNode* rev_head = reverse(slow);
        // after finding mid we are reversing the List from middle to the end
        ListNode* curr = head;
		
		// now we are checking whether the first half and the reversed half is same or not
		// if same return true else fasle
        while(curr!=NULL && rev_head!=NULL){
            if(curr->val!=rev_head->val){
                return false;
            }
            
            curr = curr->next;
            rev_head = rev_head->next;
        }
                
        return true;
   
    }
};
