#include <stdio.h>
int main() {
    double a, b;
    char amal;
    printf("birinchi sonni kiriting: ");
    scanf("%lf", &a);
    printf("amalni kiriting (+, -, *, /): ");
    scanf(" %c", &amal);
    printf("ikkinchi sonni kiriting: ");
    scanf("%lf", &b);
    switch (amal) {
        case '+':
            printf("natija: %.2lf\n", a + b);
            break;
        case '-':
            printf("natija: %.2lf\n", a - b);
            break;
        case '*':
            printf("naatija: %.2lf\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("natija: %.2lf\n", a / b);
            } else {
                printf("nolga bo'lish mumkin emas!\n");
            }
            break;
        default:
            printf("noto'g'ri amal kiritildi!\n");
    }
    
    return 0;
}
