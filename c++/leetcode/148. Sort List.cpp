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
    ListNode* merge(ListNode*, ListNode*);
    ListNode* sortList(ListNode* head) {
        if(!head or !head -> next) return head;
        
        ListNode *slow = head, *fast = head, *temp;
        
        while(fast && fast -> next) { 
            temp = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        temp -> next = nullptr;
        
        auto left = sortList(head);
        auto right = sortList(slow);
         
        return merge(left, right);
    }
};


ListNode* Solution::merge(ListNode* first, ListNode* second) {
    ListNode* dummy = new ListNode(0);
    auto node = dummy;
    
    while(first && second) {
        if(first -> val < second -> val)
            node -> next = first, first = first -> next;
        else
            node -> next = second, second = second -> next;
        
        node = node -> next;
    }
    
    if(first) node -> next = first;
    else node -> next = second;
    
    return dummy -> next;
}  
