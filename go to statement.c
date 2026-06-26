#include <stdio.h>

int main() {
    int a = 5;


    if (a == 5)
        goto message;

    printf("This will not be printed.\n");

message:
    printf("a is equal to 5.\n");

    return 0;
}
