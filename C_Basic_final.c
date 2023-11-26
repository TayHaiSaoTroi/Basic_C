#include <stdio.h>
#include <stdint.h>

float ham_Mu (int x,int y);
float ham_can(int x, int y);
void tachChuoi(char array[]);
void giaiPhuongTrinhBacHai();
int main(int argc, char const *argv[])
{
    int power=ham_Mu(2,3);
    printf("%d",power);    
    return 0;
}
float ham_Mu(int x, int y)
{
    int ketQua;
    for(int i=0;i<=y;++i)
    {
        ketQua *=x; 
    }
    return ketQua;
}

