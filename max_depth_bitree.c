int maxDepth(struct TreeNode* root) {
    if (!root)
        return 0;

    int depth = 0;
    int left = 0, right = 0;
    left = maxDepth(root->left);
    right = maxDepth(root->right);
    depth = left > right ? left + 1 : right + 1;

    return depth;
}
