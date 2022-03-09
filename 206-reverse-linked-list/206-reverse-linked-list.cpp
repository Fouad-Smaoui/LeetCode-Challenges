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
    // return reverse linked list
    ListNode* reverseList(ListNode* head) {
        ListNode*cur=head; // head
        ListNode*next=NULL; // next= null
        ListNode*prev=NULL; // prev ->null
        
        while (cur!=NULL)
        {
            next = cur -> next; 
            cur -> next = prev; 
            prev = cur; 
            cur = next; 
            
        }
        head=prev;
        return head;
        
    }
};