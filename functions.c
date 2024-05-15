// functions need to have declarations at the top before main because the code executes from top to bottom and without them you can't use functions unless they are at the top of the program
int add(int a, int b);
int add2(int *c, int *d);

// if variables are declared outside of functions they become global and usable by all functions
int num1 = 1, num2 = 3;

int main(void)
{
    add(num1, num2);
    // since the function uses pointers as input, we need to input adresses instead of the values themselves
    add2(&num1, &num2);
    return 0;
}

// function which takes 2 integers and output an integer
int add(int a, int b)
{
    return a + b;
}

// function which takes 2 integer memory adresses and outputs an integer
int add2(int *c, int *d)
{
    return *c + *d;
}