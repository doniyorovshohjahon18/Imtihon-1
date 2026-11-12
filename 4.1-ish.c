#include <stdio.h>
int main() {
    int n, yigindi = 0;
    printf("N = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        yigindi += i;
    }
    printf("yig'indi = %d\n", yigindi);
    return 0;
}
