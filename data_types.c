#include <limits.h> // header file for the different data type ranges
#include <float.h> // header file for the float and double data type ranges
#include <stdbool.h> // header file that enables bool data type
#include <stdlib.h> // header file that enables the use of malloc and free

int main(void)
{
    // each variable in C has to have a specific data type
    // unsigned means the variable can only have a positive value

    // short integer - range from -32,768 to 32,767
    short minShort = SHRT_MIN;
    short maxShort = SHRT_MAX;

    // unsigned short integer - range from 0 to 65,535
    unsigned short minUnsignedShort = 0;
    unsigned short maxUnsignedShort = USHRT_MAX;

    // integer - range from -2,147,483,648 to 2,147,483,647
    int minInt = INT_MIN;
    int maxInt = INT_MAX;

    // unsigned integer - range from 0 to 4,294,967,295
    unsigned int minUnsignedInt = 0;
    unsigned int maxUnsignedInt = UINT_MAX;

    // long long integer - range from -9223372036854775808 to 9223372036854775807
    long long minLong = LLONG_MIN;
    long long maxLong = LLONG_MAX;

    // unsigned long long integer - range from 0 to 18446744073709551615
    unsigned long long minUnsignedLong = 0;
    unsigned long long maxUnsignedLong = ULLONG_MAX;

    // char - range from −127 to 127
    char minChar = CHAR_MIN;
    char maxChar = CHAR_MAX;
    char letter = 'a';

    // unsigned char - range from 0 to 255
    unsigned char minUnsignedChar = 0;
    unsigned char maxUnsignedChar = UCHAR_MAX;

    // float - range from 1.17549435e-38F to 3.40282347e+38F
    float minFloat = FLT_MIN;
    float maxFloat = FLT_MAX;
    const float PI = 3.14159265359;

    // double - range from 2.2250738585072014e-308 to 1.7976931348623157e+308
    double minDouble = DBL_MIN;
    double maxDouble = DBL_MAX;

    // long double - range from 3.36210314311209350626e-4932L to 1.18973149535723176502e+4932L
    long double minLongDouble = LDBL_MIN;
    long double maxLongDouble = LDBL_MAX;

    // bool - true = 1, false = 0
    bool boolean = false;

    // arrays - int
    int array1[3] = {1, 2, 3};
    int array2[3];
    array2[0] = 1;
    array2[1] = 2;
    array2[2] = 3;

    // arrays - char
    char charArray1[6] = {'S', 't', 'r', 'i', 'n', 'g'};
    char charArray2[2];
    charArray2[0] = 'r';
    charArray2[1] = 'e';
    charArray2[2] = 'd';

    // strings - arrays of characters
    char string1[] = "String";

    // strings - char pointer char*
    char* string2 = "String";

    // pointers - declaration
    int integer1 = 1;
    int* pointer1;

    // pointers - initialization by pointing towards the memory address of integer1
    pointer1 = &integer1;

    // structures - declaration
    struct car
    {
        char* name;
        int maxSpeed;
    };
    
    // structures - create a variable of the structure
    struct car car1;

    // structures - fill the variable with data
    car1.name = "bmw";
    car1.maxSpeed = 100;

    // structures - create a variable of the structure
    struct car car2 = {"audi", 120};

    // you can "rename" a data type with typedef
    typedef char* string;
    string string3 = "hello";

    // defining a char*/string with memory allocation, the +1 is for the "\n" symbol at the end to notate the end of a string
    string string4 = malloc(sizeof(char) * 6 + 1);
    string4 = "String";

    // freeing memory after memory allocation to avoid memory leaks
    free(string4);

    return 0;
}