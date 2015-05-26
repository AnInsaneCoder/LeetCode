/**

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *tmp_ptr = head;
        int carry = 0;
        while (l1 || l2 || carry) {
            int tmp = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = tmp / 10;
            tmp = tmp % 10;
            ListNode *tmp_node = new ListNode(tmp);
            tmp_ptr->next = tmp_node;
            tmp_ptr = tmp_ptr->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        return head->next;
    }
};
