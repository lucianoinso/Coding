#include <stdio.h>

int main() {
    int num, k, lastdigit;
    scanf("%d %d", &num, &k);

    for (int i = 0; i < k; i++) {
        lastdigit = num % 10;

        if (lastdigit != 0) {
            num -= 1;
        } else {
            num /= 10;
        }
    }

    printf("%d", num);
    return 0;
}

