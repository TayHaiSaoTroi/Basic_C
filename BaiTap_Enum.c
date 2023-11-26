#include <stdio.h>
typedef enum{
    THU_HAI,
    THU_BA,
    THU_TU,
    THU_NAM,
    THU_SAU,
    THU_BAY,
    CHU_NHAT
}weekday; 
typedef struct 
{
    /* data */
    int NGAY;
    int THANG;
    int NAM;
}thoi_gian;

int main(int argc, char const *argv[])
{
    int ngay;int thang; int nam;
    printf("Nhap vao ngay (1-31): \n");
    scanf ("%d",&ngay);
    printf("Nhap vao thang (1-12): \n");
    scanf("%d",&thang);
    printf("Nhap vao nam: \n");
    scanf("%d",&nam);


    return 0;
}
