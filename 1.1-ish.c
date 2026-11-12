#include <stdio.h>

int main() {
    
    int num;
    printf("Son kiriting: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Musbat son\n");
    } else {
        printf("Manfiy son\n");
    }

    return 0;
}