#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int odd_num = 2 * i - 1;
        sum += odd_num;
    }

    printf("The sum of the first %d odd numbers is %d\n", n, sum);
    printf("n^2 = %d\n", n * n);

    if (sum == n * n) {
        printf("The formula is verified!");
    } else {
        printf("The formula is not verified.");
    }

    return 0;
}
