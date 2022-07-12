#include <stdio.h>
#include "main.h"

/** 
 * Update the value of a pointer variable
 */

int main(void) {
	int n;

        n = 402;
        printf("n=%d\n", n);
        reset_to_98(&n);
        printf("n=%d\n", n);
        return (0);
}

void reset_to_98(int *n) {
	*n = 98;
}
