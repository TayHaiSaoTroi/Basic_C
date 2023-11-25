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
