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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v ;
        ListNode *start = head ;
        if(left >= right) return head ;
        int count = 1;
        while(count != right)
        {
        if(count == left)
        {
            while(count != right)
            {
                v.push_back(start->val);
                start =start ->next;
                count++;
            }
            v.push_back(start ->val);
            break;
        }
        else 
        {
            start = start ->next;
            count++;
        }
        }
        reverse(v.begin() , v.end());
                start = head;
        count = 1;
        while(count != right) {
            if(count == left) {
                int i = 0;
                while(count != right) {
                    start->val = v[i++];
                    start = start->next;
                    count++;
                }
                start->val = v[i];
                break;
            } else {
                start = start->next;
                count++;
            }
        }

     return head;
    }
};
