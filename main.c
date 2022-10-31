#include <stdio.h>

int main() {
    int a;
    printf("Введите число в 8-ой системе счисления:\n");
    scanf("%x",&a);
    printf("%x\n",a);
    printf("%x\n",a>>=4);
    return 0;
}
