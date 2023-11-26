#include <stdio.h>
#include <stdint.h>
uint8_t var;
int8_t diem;
void information (char* name, uint16_t id, uint8_t age)
{
    printf("name: %s , id: %d,Tuoi: %d",name,id,age);
}
int main(int argc, char const *argv[])
{
    /* code */
    printf("size of %d \n",sizeof(var));
    information("Tan",2000,23);
    return 0;
}
