#include <stdio.h>

int main(void) 
{
    int decimal = 20;
    int octal = 0177;
    int hex = 0xFFEF0D;
    float hexsci = 0x0.3p10;
    
    printf("Decimal value 20: %i, %o, %x, %#x\n", decimal, decimal, decimal, decimal);
    printf("Octal value 0177: %i, %o, %x, %#x\n", octal, octal, octal, octal);
    printf("Hex value 0xFFEF0D: %i, %o, %x, %#x\n", hex, hex, hex, hex);
    printf("Hex scientific notation: %e\n", hexsci);

    return 0;
}
