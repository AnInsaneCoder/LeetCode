bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p && !q)
        return true;

    if ((!p && q) || (p && !q) || (p->val != q->val))
        return false;

    if (isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
        return true;

    return false;
}
