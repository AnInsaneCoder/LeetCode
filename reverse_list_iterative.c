struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode *prev = NULL;
    struct ListNode *cur = head;
    struct ListNode *next = NULL;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
