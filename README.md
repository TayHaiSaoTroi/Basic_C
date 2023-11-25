Bai1
*Variable
Code:
#include <stdint.h>
uint8_t var; // luu gia tri tru 0-255 
int8_t var; // int8_t luu gia tri tu -128- -1 & 0-127

int main(int argc, char const *argv[])
{
var=300;
printf("size of variable %lu \n",sizeof(var));
printf("%d", var);
prinln();
}
*Function
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
uint8_t tinhtong(int a, int b) // ham co kieu tra ve
{
return a+b;
}
void information (char* name, uint8_t id,uint8_t tuoi /*parameter*/) // ham khong co kieu tra ve
{
    printf("name: %s , id: %d, tuoi: %d ",name,id,tuoi);
}
float thuong(uint8_t a, uint8_t b)
{
return (float)a/b;
}
int main()
{
    information("tan",2000,23);
    printf("ketqua %d", tinhtong(8,10));
    printf("ketqua %f",thuong(10,3));

    return 0;
}

Bai2 Conditional
*if----else
if ( condition)
{
// task 1
}
else
{
//task 2
}
//comment: Cau truc dieu kien if --else : neu "condition" dung thi thuc hien task 1 neu sai thi thuc hien task 2
// attention : neu if khong co dieu khien thi neu bien  khac 0  thi se chay task 1 =0 thi chay task 2
--code--
#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    /* code */
    float diem =9;
    if(diem >8.0 /* condition */)
    {
        printf("Hoc sinh gioi \n"); //task 1
    }
    else if ((diem >=6.5) && (diem <=8.0)/* condition */)
    {
        /* code */
        printf("Hoc sinh kha\n"); //task 2
    }
    else
    {
        printf("Hoc sinh trung binh \n");
    }

    int  test=0;
    if(test)
    {
        printf("Test\n"); //task 1
    }
    else
    {
        printf("false \n"); // task 2
    }
    return 0;
}
*switch--case
switch (expression)
case /*costant-expression*/:
//task 1
break;
case:
//task 2
break;
default:
break;

/// Switch case : thuong duoc dung trong viec so sanh cac label, kết thúc mỗi " case" luôn luôn phải có lệnh break;
--code--

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

Bai4_ vonglap

