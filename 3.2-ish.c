#include <stdio.h>
int main() {
    int son, yigindi = 0;
    printf("son kiriting (to'xtatish uchun 0 kiriting):\n");
    while (1) {
        printf("son: ");
        scanf("%d", &son);
        if (son == 0) {
            break;
        }
        yigindi += son;
    }
    printf("Yig'indi: %d\n", yigindi);
    return 0;
}
