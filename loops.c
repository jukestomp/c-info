int recursion(int n);

int main(void)
{
    int num1 = 1;
    int num2 = 2;

    // while loop
    while (num1 < num2)
    {
        num1++;
    }

    // do while loop, loops once guaranteed then checks the condition
    do
    {
        num2++;
    } 
    while (num2 == num1);

    // for loop
    for (int i = 0; i <= 3; i++)
    {
        num2++;
    }

    // goto label loop
    END:
        num1++;
    if (num1 < num2)
    {
        goto END;
    }

    // recursive loop
    num1 = recursion(num1);

    return 0;
}

// recursive function
int recursion(int n)
{
    if (n == 10)
    {
        return n;
    }
    else
    {
        return recursion(n + 1);
    }
}