#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    /* code */
    uint8_t month ;
    printf("Nhap vao thang: ");
    scanf("%d",&month);
    uint8_t year;

    switch (month)
    {
    case /* constant-expression */ 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("Thang co 31 ngay \n");
        /* code */
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("Thang co 30 ngay \n");
        break;
    case 2:
    printf("Nhap vao nam: \n");
    scanf ("%d",&year);
    if((year %2==0 && year % 100 !=0)|| (year %400 !=0))
    {
        printf("Thang co 29 ngay\n");
    }
    else
    {
        printf("Thang co 28 ngay\n");
    }
    break;
    default:
    printf("Thang khong hop le");
        break;
    }
    
    return 0;
}
