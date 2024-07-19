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
    private:
        ListNode *reverse(ListNode *head)
        {
            ListNode *temp = head;
            ListNode *prev = NULL;
            ListNode *nex ;
            while(temp != NULL)
            {
                nex = temp ->next;
                temp ->next = prev ;
                prev = temp;
                temp = nex ;
            }
            return prev ;
        }
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head ->next ;
        while(fast!= NULL && fast->next != NULL)
        {
            slow = slow ->next;
            fast = fast ->next ->next;
        }
        ListNode *right_head = slow ->next;
        slow ->next = NULL;
        right_head = reverse(right_head);
        slow = head ;
        while(slow != NULL && right_head !=NULL)
        {
            if(slow ->val != right_head ->val)
            {
                return false ;
            }
            else 
            {
                slow = slow ->next;
                right_head = right_head ->next;
            }
        }
        return true ;
    }
};
