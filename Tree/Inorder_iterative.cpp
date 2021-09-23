#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


 // } Driver Code Ends
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        stack<Node*> st;
        Node* curr = root;
        vector<int> v;
        while(curr!=NULL || st.empty()==false){
            
            while(curr!=NULL){
                st.push(curr);
                curr = curr->left;
            }
            
            curr = st.top();
            st.pop();
            v.push_back(curr->data);
            
           
            curr = curr->right;
            
            
        }
        
        
        return v;
    }
};

