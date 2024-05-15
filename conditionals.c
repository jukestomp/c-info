int main(void)
{
    int number1 = 1;
    int number2 = 2;
    int number3 = 3;

    // if else if else loop
    if (number1 == number3)
    {
        printf("if\n");
    }
    else if (number2 >= number3)
    {
        printf("else if\n");
    }
    else
    {
        printf("else\n");
    }

    // ternary operator
    (number1 == number3) ? printf("?\n") : printf("!?\n");

    // ternary operator for value assignment
    number3 = (number2 > number1) ? 3 : 4;

    // switch
    switch (number3 - number1)
    {
        case 1:
            printf("case1\n");
            break;

        case 2:
            printf("case2\n");
            break;

        default:
            printf("default\n");
            break;
    }

    return 0;
}