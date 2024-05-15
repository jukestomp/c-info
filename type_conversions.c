#include <stdlib.h>

int main(void)
{
    char str[] = "123";
    // atoi() - converts string to int
    int num = atoi(str);

    // itoa() - converts int to string
    itoa(num, str, 3);

    int num1 = 5, num2 = 2;
    // (float) - converts to float
    float num3 = (float) num1 / num2;
    printf("%f", num3);

    return 0;
}