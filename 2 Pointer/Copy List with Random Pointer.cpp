/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr = head;
        while(curr!=NULL){
            Node* curr_next = curr->next;
            curr->next = new Node(curr->val);
            curr = curr->next;
            curr->next = curr_next;
            curr = curr->next;
        }
        
        curr = head;
    while(curr!=NULL){
        if(curr->random == NULL){
            curr->next->random = NULL;
        }
        else{
            curr->next->random = curr->random->next;
        }
        
        curr = curr->next->next;
    }
        
        Node* new_head = new Node(0);
        curr = head;
        Node* curr1 = new_head;
        while(curr!=NULL){
            Node* curr_next = curr->next->next;
            Node* curr1_next = curr->next;
            curr->next = curr->next->next;
            curr1->next = curr1_next;
            curr1 = curr1->next;
            curr = curr_next;
        }
        
        curr1->next = NULL;
        return new_head->next;
    }
};
