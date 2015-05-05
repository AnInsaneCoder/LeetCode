bool hasPathSum(struct TreeNode* root, int sum) {
    if (root == NULL)
        return false;

    if (root->left == NULL && root->right == NULL && sum == root->val)
        return true;

    else if (root->left == NULL && root->right == NULL && sum != root->val)
        return false;

    if (hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val))
        return true;

    return false;
}
