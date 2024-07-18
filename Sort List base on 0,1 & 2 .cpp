Node* segregate(Node *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node *ptr_0 = new Node(-1);
    Node *ptr_1 = new Node(-1); 
    Node *ptr_2 = new Node(-1); 

    Node *temp_0 = ptr_0;
    Node *temp_1 = ptr_1;
    Node *temp_2 = ptr_2;

    Node *ptr = head;

    while (ptr != nullptr) {
        if (ptr->data == 0) 
        {
            temp_0->next = ptr;
            temp_0 = temp_0->next;
        }
        else if (ptr->data == 1)
        {
            temp_1->next = ptr;
            temp_1 = temp_1->next;
        } 
        else
        { 
            temp_2->next = ptr;
            temp_2 = temp_2->next;
        }
        ptr = ptr->next;
    }

  
    temp_0->next = NULL;
    temp_1->next = NULL;
    temp_2->next = NULL;

    if (ptr_1->next != NULL) 
    {
        temp_0->next = ptr_1->next;
    } 
    else
    {
        temp_0->next = ptr_2->next;
    }
    temp_1->next = ptr_2->next;

    head = ptr_0->next;

    delete ptr_0;
    delete ptr_1;
    delete ptr_2;

    return head;
}
