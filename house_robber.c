#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}
// time limit exceeded
int rob(int num[], int n) {

    int result;
    if (n == 1)
        result = num[0];
    else if (n == 2)
        result = max(num[0], num[1]);
    else {

        result = max(rob(num, n - 2) + num[n - 1], rob(num, n - 1));
    }

    return result;
}
// passed
int robber(int num[], int n) {
 
    int result;
    int one;
    int two;
    if (n == 0)
        return 0;
        
    if (n == 1)
        result = num[0];
    else if (n == 2)
        result = max(num[0], num[1]);
    int i;
    one = num[0];
    two = max(num[0], num[1]);
    for(i = 2; i < n; i++) {
        result = max(one + num[i], two);
        one = two;
        two = result;
    }
        
    return result;
}

int main() {
    //int a[6] = {9, 3, 4, 2, 5, 1};
    int a[6] = {1, 2, 3, 4, 6, 7};
    printf("%d\n", robber(a, 6));

    return 0;
}
