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
    ListNode* partition(ListNode* head, int x) {
        ListNode *dummyNode1 = new ListNode(-1);
        ListNode *temp1 = dummyNode1 ;
        ListNode *dummyNode2 = new ListNode(-1);
        ListNode *temp2 = dummyNode2;
        ListNode *start = head ;
        while(start!=NULL)
        {
            if(start ->val < x)
            {
                temp1->next = start ;
                temp1 = temp1 ->next;
            }
            else
            {
                temp2 ->next = start ;
                temp2 = temp2 ->next;
            }
            start = start->next;
        }
        temp2->next = NULL;
        temp1 ->next = dummyNode2 ->next;
        return dummyNode1 ->next ;
    }
};
