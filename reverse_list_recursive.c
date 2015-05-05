struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode *ptr = head;
    head = reverseList(ptr->next);
    ptr->next->next = ptr;
    ptr->next = NULL;

    return head;
}
