#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
     int dec;
     printf("Input Decimal Number : ");
     scanf("%d", &dec);
     printf("\nOctal = %o", dec);
     printf("\nHexadecimal = %X", dec);

    getch();
    return 0;
}
