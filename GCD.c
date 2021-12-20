/* Author RobertG111 */
#include <stdlib.h>
#include <stdio.h>

int main( int argc, char *argv[] )  {

    int x, y, r;
    char *ptr;

    if( argc != 3 ) {
        fprintf(stderr, "Error : Invalid entry\n");
    }

    x = strtol(argv[1], &ptr, 10);
    y = strtol(argv[2], &ptr, 10);

    r = x % y;

    while(r>0){
        x = y;
        y = r;
        r = x % y;
    }
    printf("GCD %d", y);
}