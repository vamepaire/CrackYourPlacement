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
    ListNode* removeElements(ListNode* head, int val) {
       ListNode *prev=new ListNode(0);
       prev->next=head;
       ListNode *current=prev;
    //    if(ptr==NULL || (ptr->next==NULL&& ptr->val==val)) return head;
       while(current->next!=NULL)
       {
        if(current->next->val==val) current->next=current->next->next;
        else current=current->next;
        
       }return prev->next;
    }
};
