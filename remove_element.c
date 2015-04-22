void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int removeElement(int A[], int n, int elem) {
    int i, j = n - 1;
    for (i = 0; i < n; i++) {
        if (A[i] == elem) {
            swap(&A[i--], &A[j--]);
            n--;
        }
    }

    return j + 1;
}
