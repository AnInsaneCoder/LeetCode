int climbStairs(int n) {
    int n_2 = 1, n_1 = 2, total = 0;
    int i;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    for (i = 2; i < n; i++) {
        total = n_2 + n_1;
        n_2 = n_1;
        n_1 = total;
    }

    return total;
}
