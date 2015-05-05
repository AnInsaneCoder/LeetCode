struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL)
        return NULL;
    if(head->next == NULL)
        return head;
    struct ListNode *ptr = head;
    struct ListNode *ptr1;
    while (ptr->next->next != NULL)
        ptr = ptr->next;
    ptr1 = ptr;
    ptr = ptr->next;
    ptr1->next = NULL;
    ptr->next = reverseList(head);

    return ptr;
}
