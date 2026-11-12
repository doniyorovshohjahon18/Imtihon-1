#include <stdio.h>

int main() {
    int day;

    printf("Hafta kunlarini kiriting: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Dushanba");
            break;
        case 2:
            printf("Seshanba");
            break;
        case 3:
            printf("Chorshanba");
            break;
        case 4:
            printf("Payshanba");
            break;
        case 5:
            printf("Juma");
            break;
        case 6:
            printf("Shanba");
            break;
        case 7:
            printf("Yakshanba");
            break;
        default:
            printf("Bunday kun mavjud emas");
    } 


    
    

    return 0;
}