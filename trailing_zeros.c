#include <stdio.h>
int trailingZeroes(int n) {

    int divider = 5;

    int result = 0;

    int total = n;

    int count = 0;

    int i;

    

    while(total > 0){

        total /= 5;

        result += n / divider;

        divider *= 5;

        //count++;

    }

    // //while((tmp = n / divider) != 0) {

    // for(i = 1; i < count; i++) {

    //     result += n / divider;

    //     divider *= 5;

    // }

    

    return result;

}
int main() {

    printf("%d\n", trailingZeroes(101));
    return 0;
}
