#include <stdio.h>
#include <stdlib.h>
#include "LastElement.h"

int main() {
    int n = 0;
    int ans;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    ans = lastStoneWeight(a, n);
    printf("%d", ans);
    free(a);
    return 0;
}
