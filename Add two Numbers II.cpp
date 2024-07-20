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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto reverseList = [](ListNode* head) {
            ListNode* prev = NULL;
            ListNode* current = head;
            while (current != NULL) {
                ListNode* nextTemp = current->next;
                current->next = prev;
                prev = current;
                current = nextTemp;
            }
            return prev;
        };
        l1 = reverseList(l1);
        l2 = reverseList(l2);

        ListNode* dummyNode = new ListNode(0);
        ListNode* temp = dummyNode;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry) {
            int x = (l1 != NULL) ? l1->val : 0;
            int y = (l2 != NULL) ? l2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;

            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }
        auto front = reverseList(dummyNode->next);
        return front;
    }
};
