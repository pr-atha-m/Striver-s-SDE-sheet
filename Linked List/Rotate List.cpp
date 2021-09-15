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
        
        ListNode* curr = head;
        int count = 0;
        while(curr!=NULL){
            curr = curr->next;
            count++;
        }
        if(count == 0){
            return head;
        }
        k = k%count;
        if(k == 0){
            return head;
        }
        curr = head;
        ListNode* prev = NULL;
        for(int i=0;i<count-k;i++){
            prev = curr;
            curr = curr->next;
        }
        
        ListNode* new_head = curr;
        
        prev->next = NULL;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        
        curr->next = head;
        return new_head;
        
        
    }
};
