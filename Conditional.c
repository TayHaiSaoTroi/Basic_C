#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    /* code */
    float diem =9;
    if(diem >8.0)
    {
        printf("Hoc sinh gioi \n");
    }
    else if ((diem >=6.5) && (diem <=8.0)/* condition */)
    {
        /* code */
        printf("Hoc sinh kha\n");
    }
    else
    {
        printf("Hoc sinh trung binh \n");
    }

    int  test=0;
    if(test)
    {
        printf("Test\n");
    }
    else
    {
        printf("false \n");
    }
    return 0;
}
