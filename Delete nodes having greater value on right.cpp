Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *temp = head ;
    Node *nex ;
    while(temp != NULL)
    {
        nex = temp ->next;
        temp ->next = prev;
        prev = temp;
        temp = nex ;
    }
    return prev;
}
class Solution
{
    public:
    Node *compute(Node *head)
    {
        head = reverse(head);
        Node *ptr1 = head ;
        Node *ptr2 = head->next;
        
        while(ptr2 != NULL)
        {
        if( ptr1 ->data > ptr2->data)
        {
            ptr2 = ptr2 ->next ;
            ptr1 ->next = ptr2 ;
        }
        else 
        {
        ptr1 = ptr1 ->next;
        ptr2 = ptr2 ->next;
        }
        }
        head = reverse(head);
        return head;
    }
    
};
