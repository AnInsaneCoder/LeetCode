/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *deleteDuplicates(struct ListNode *head) {
    if (head == NULL)
        return NULL;
    int cur_val = head->val;
    struct ListNode *ptr1 = head, *ptr2 = head;
    while(ptr2 != NULL) {
        if (ptr2->val != cur_val) {
            ptr1->next = ptr2;
            ptr1 = ptr1->next;
            cur_val = ptr2->val;
        }
        ptr2 = ptr2->next;
    }
    ptr1->next = NULL;

    return head;
}
