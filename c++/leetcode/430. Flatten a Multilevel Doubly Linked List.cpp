/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) { 
        auto node = head;
        
        while(node) {
            
            if(node -> child) {
                auto parent_next = node -> next;
                node -> next = flatten(node -> child);
                node -> next -> prev = node;
                node -> child = nullptr;
                
                while(node -> next) 
                    node = node -> next;                                        
                
                node -> next = parent_next;
                
                if(parent_next)
                    parent_next -> prev = node;
            }
            
            node = node -> next;
        }
        
        
        return head;
    }
};
