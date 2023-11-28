#include <stdio.h>

float canBacHai(float n) {
    if (n == 0 || n == 1)
        return n;

    float x = n;
    float y = 1;
    while (x - y > 0) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    float a, b, c;
    float delta, x1, x2;
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + canBacHai(delta)) / (2 * a);
        x2 = (-b - canBacHai(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
    } else {
        printf("Phuong trinh vo nghiem.\n");
    }

    return 0;
}
