#include <stdio.h> // required for scanf and printf
#include <stdlib.h> // required for malloc and free

int main(void)
{
    /*
        char               - %c
        int                - %i or %d
        unsigned int       - %u
        short              - %hi or %hd
        unsigned short     - %hu
        long               - %li or %ld
        unsigned long      - %lu
        long long          - %lli or %lld
        unsigned long long - %llu
        float              - %f
        double             - %lf
        long double        - %Lf
        char array         - %s
        char pointer       - %s
    */

    int number1;
    int number2;
    // printf - prints text or values
    printf("Enter integer1 and integer2: ");
    // scanf - scans for input for specific data types and input into memory addresses of the variables, %i is for integer
    scanf("%i %i", &number1, &number2);

    int result = number1 * number2;
    // printf - printing an integer %i \n adds a new line
    printf("%i\n", result);

    float number3;
    printf("Enter a float: ");
    // scanf - scans for a %f float
    scanf("%f", &number3);
    // printf - printing a floating point number %f prints up to 6 decimal places, %.2f prints to the second decimal place
    printf("%.2f\n", number3);

    char letter1;
    printf("Enter a char: ");
    // scanf - scans for %c char, the space before %c is important
    scanf(" %c", &letter1);
    // printf - printing a character %c
    printf("%c\n", letter1);

    char string1[10];
    printf("Enter a string: ");
    // scanf - scans for %s string
    scanf("%s", string1);
    printf("%s\n", string1);

    // char pointer has to have memory allocated first
    char* string2 = malloc(sizeof(char) * 10);
    printf("Enter a string: ");
    // scanf - scans for %s[^\n] string, this take the whole line
    scanf("%s[^\n]", string2);
    printf("%s\n", string2);
    // freeing the memory allocation
    free(string2);

    // make a file pointer for writing a file, all the previous data gets removed when using write
    FILE* write = fopen("io.txt", "w");
    // fputc writes a single character to the file
    fputc('r', write);
    fputc('a', write);
    fputc('b', write);
    fputc('b', write);
    fputc('i', write);
    fputc('t', write);
    // close our write file pointer
    fclose(write);

    // make a file pointer for appending a file
    FILE* append = fopen("io.txt", "a");
    // fputc writes a single character to the file
    fputc('m', append);
    fputc('a', append);
    fputc('n', append);
    fputc('!', append);
    // close our append file pointer
    fclose(append);

    // make a file pointer for reading a file
    FILE* read2 = fopen("io.txt", "r");
    // define a char that will store each character we're reading
    char ch;
    // make a char* variable with 9 size
    char* string3 = malloc(sizeof(char) * 9);
    // fread takes 9 sizeofchar units from the read2 file pointer and stores them into string3
    fread(string3, sizeof(char), 9, read2);
    printf("%s\n", string3);
    // fread takes 1 sizeofchar units from the read2 file pointer and stores it into ch, when using simple variables need to use &varname
    fread(&ch, sizeof(char), 1, read2);
    printf("%c\n", ch);
    // close our read file pointer
    fclose(read2);

    // make a file pointer for writing a file, all the previous data gets removed when using write
    FILE* write2 = fopen("io.txt", "w");
    // fwrite takes 9 sizeofchar units from string3 and writes them into the file using the write2 file pointer
    fwrite(string3, sizeof(char), 9, write2);
    // close our read write pointer
    fclose(write2);

    // make a file pointer for appending a file
    FILE* append2 = fopen("io.txt", "a");
    // fwrite takes 1 sizeofchar units from ch and writes them into the file using the append2 file pointer
    fwrite(&ch, sizeof(char), 1, append2);
    // close our read write pointer
    fclose(append2);

    // make a file pointer for reading a file
    FILE* read = fopen("io.txt", "r");
    // fgetc reads the first/next character in a file and returns it into our variable, EOF means end of file and defines the end of the file
    while((ch = fgetc(read)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n");
    // close our read file pointer
    fclose(read);


    return 0;
}