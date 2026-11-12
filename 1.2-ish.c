#include <stdio.h>

int main() {
    int a, b, c, d = 0;
    printf("sonlar kiriting: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0) {
        d = a;
    }
    if (b > 0) {
        d = b;
    }        
    if (c > 0) {
        d = c;
    }

    printf("%d\n", d);

    return 0;
}