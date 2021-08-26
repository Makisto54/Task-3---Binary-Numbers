#include <stdio.h>

int main(void)
{
    int a = 0x00DDAABB;
    int b = 0;

    printf("Base number - %x\n", a);

    printf("Base number in bites - ");
    for (int i = 32; i >= 0; i -= 8)
    {
        printf("%x", (a >> i) & 0xFF);
    }
    printf("\n");

    b = (a & 0xFFFF00FF);
    b |= 0x00CC00;

    printf("New number - %x\n", b);

    printf("New number in bites - ");
    for (int i = 32; i >= 0; i -= 8)
    {
        printf("%x", (b >> i) & 0xFF);
    }
    printf("\n");  

    return 0;
}