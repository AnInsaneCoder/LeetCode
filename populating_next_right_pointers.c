/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  struct TreeLinkNode *left, *right, *next;
 * };
 *
 */

void connect(struct TreeLinkNode *root) {
    struct TreeLinkNode *ptr;
    struct TreeLinkNode *head = root;
    while (head != NULL && head->left != NULL) {
        ptr = head;
        while(ptr != NULL) {
            ptr->left->next = ptr->right;
            if (ptr->next != NULL)
                ptr->right->next = ptr->next->left;
            ptr = ptr->next;
        }   
        head = head->left;
    }
}
