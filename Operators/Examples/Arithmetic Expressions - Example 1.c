// Arithmetic Expression - Example

#include <stdio.h>
int main() {
    int a = 9;
    int b = 12;
    int c = 3;
    int x;
    int y;
    int z;
    printf("x = %d\n", a-b/3+c*2-1);
    printf("y = %d\n", a-b/(3+c)*(2-1));
    printf("z = %d\n", a-(b/(3+c)*2)-1);
}

/* Output:
x = 10
y = 7
z = 4
*/