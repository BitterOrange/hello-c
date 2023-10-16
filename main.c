#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    puts("Let's randomize!");
    srand(time(NULL));
    printf("%ld\n", rand() % 100 + 1);
    return 0;
}
