#include <stdio.h>

int num;

 int main() {

    printf( "Hello, world!\n" );
    printf("Please enter your favorite number: ");
    scanf( "%d", &num );
    printf("%d is also my favorite number!\n", num);
    return 0;
 }