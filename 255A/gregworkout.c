#include <stdio.h>
#include <stdlib.h>

int main() {
    int amount;
    scanf("%d", &amount);
    int *inputVec = calloc(amount, sizeof(int));
    int chest = 0;
    int biceps = 0;
    int back = 0;

    for (int i = 1; i <= amount; i++) {
        scanf("%d", &inputVec[i-1]);
        if (i % 3 == 1)
            chest += inputVec[i-1];
        else if (i % 3 == 2)
            biceps += inputVec[i-1];
        else if (i % 3 == 0)
            back += inputVec[i-1];
    }

    if (chest > biceps) {
        if (chest > back) {
            printf("chest");
        } else {
            printf("back");
        }
    } else {
        if (biceps > back)
            printf("biceps");
        else
            printf("back");
    }

    free(inputVec);
    return 0;
}

