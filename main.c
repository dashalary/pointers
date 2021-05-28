#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    int num = 0;
    int *pnum = NULL; // a pointer that points to type int

    num = 10;
    printf("num's address: %p\n", &num); // outputs the address
    printf("num's value: %d\n\n", num);  // outputs the value

    pnum = &num; // stores the address of num in pnum

    printf("pnum's address: %p\n", (void *)&pnum);   // outputs the address
    printf("pnum's size: %d bytes\n", sizeof(pnum)); // outputs the size
    printf("pnum's value: %p\n", pnum);              // outputs the value
    printf("value pointed to: %d\n\n", *pnum);       // value at the address that is at the value of pointer

    return 0;
}