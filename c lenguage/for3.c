// write  a full pyramid 
//* * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * *
//     *

#include<stdio.h>
void main()
{
    int count = 0,flash = 0;
    for(count = 0;count < 6;count++)
    {
        printf("*");
        printf("-");
    }
    printf("\n");
    for(count = 0;count < 5;count++)
    {
        printf("-");
        printf("*");
    }
    printf("\n");
    for(flash = 0;flash <2; flash++)
    {
        printf("-");
    }
    for(count =0;count < 4;count++)
    {
        printf("*");
        printf("-");
    }
    printf("\n");
    for(flash = 0;flash < 3;flash++)
    {
        printf("-");
    }
    for(count = 0;count < 3;count++)
    {
        printf("*");
        printf("-");
    }
    printf("\n");
    for(flash = 0;flash < 4;flash++)
    {
        printf("-");
    }
    for(count = 0;count <2;count++)
    {
        printf("*");
        printf("-");
    }
    printf("\n");
    for(flash = 0;flash < 5;flash++)
    {
      printf("-");
    }
    printf("*");
}