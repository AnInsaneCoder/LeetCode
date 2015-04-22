int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *result = (int *)malloc((digitsSize + 1) * sizeof(int *));
    int i, j, carry, one;
    for(i = digitsSize, j = digitsSize - 1, carry = 0, one = 1; i >= 0; i--) {
        result[i] = (digits[j] + one + carry) % 10;
        carry = (digits[j] + one + carry) / 10;
        one = 0;
        if (j > 0)
            j--;
        else
            digits[j] = 0;
    }
    if(result[0] > 0) {
        *returnSize = digitsSize + 1;
        return result;
    } else {
        *returnSize = digitsSize;
        return &result[1];
    }
}
