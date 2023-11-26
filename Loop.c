#include <stdio.h>
#include <stdint.h>
 
 //for
 //do -while
 //while

 int main(int argc, char const *argv[])
 {
    /* code */

    for(int i=0;i<10;++i)
    {        
        if(i==5) 
        {       
            continue;
        }
        printf("Gia tri cua i la: %d \n ",i);

    }
    
    return 0;
 }
 