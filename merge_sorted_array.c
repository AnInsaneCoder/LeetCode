void merge(int A[], int m, int B[], int n) {
    int i;
    int index_a = m - 1, index_b = n - 1;

    if (m == 0) {
        memcpy(A, B, n * sizeof(int));
        return;
    }
    if (n == 0)
        return;

    for (i = m + n - 1; i >= 0; i--) {
        if (A[index_a] > B[index_b]) {
            A[i] = A[index_a--];
            if (index_a < 0) {
                memcpy(A, B, i * sizeof(int));
                return;
            }
        } else {
            A[i] = B[index_b--];
            if (index_b < 0)
                return;
        }
    }
}
