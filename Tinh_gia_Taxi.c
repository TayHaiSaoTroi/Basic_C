#include <stdio.h>
#include <stdint.h>


/* tinh gia di taxi
    gia mo cua:14000
    di duoc 30 km: 12000
    di duoc tren 30km: 10000*/
int main(int argc, char const *argv[])
{
    /* code */
    uint8_t km =0;
    printf("Nhap vao so km: \n");
    scanf("%d",&km);
    if(km<=1)
    {
        printf("Gia tien: %d \n",14000);

    }
    else if(km =30)
    {
        printf("Gia tien: %d \n",12000 +14000+29*14000);
    }
    else
    {
        printf("Gia tien: %d \n",14000+29*14000+ 10000*(km-29));
    }
    return 0;
}
