#include <stdio.h>
int isArmstrong(int n) {
    int original = n;
    int digits = 0, result = 0;
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        int power=1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        result += power;
        temp /= 10;
    }
    return (result == original);
}
int main() {
    int n;
    scanf("%d", &n);
    if (isArmstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}