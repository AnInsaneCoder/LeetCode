int removeDuplicates(int A[], int n) {
    if (n == 0)
        return 0;
    int cur_num = A[0];
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        if (A[i] != cur_num) {
            A[j++] = cur_num;
            cur_num = A[i];
        }
    }
    A[j++] = cur_num;

    return j;
}
