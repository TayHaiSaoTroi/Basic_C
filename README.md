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

void information (char* name, uint8_t id,uint8_t tuoi /*parameter*/)
{
    printf("name: %s , id: %d, tuoi: %d ",name,id,tuoi);
}
int main()
{
    information("tan",2000,23);

    return 0;
}
