// sizeof() Operator
// Finds size in bytes of a variable

#include <stdio.h>
int main()
{
    int num;
    float flt;
    double dbl;
    char chr;
    printf("Size of int: %zu bytes \n", sizeof(num));
    printf("Size of float: %zu bytes \n", sizeof(flt));
    printf("Size of double: %zu bytes \n", sizeof(dbl));
    printf("Size of char: %zu bytes \n", sizeof(chr));
}

/* Output:
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 bytes
*/