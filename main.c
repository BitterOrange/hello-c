#include <stdio.h>
#include "util/random.h"

int main()
{
    puts("Let's randomize!");
    init_random();
    long upper_limit;
    scanf("%ld", &upper_limit);
    printf("%ld\n", random(upper_limit));
    return 0;
}
