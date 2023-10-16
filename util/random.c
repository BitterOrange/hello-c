#include <stdlib.h>

void init_random()
{
    srand(time(NULL));
}

long random(long upper_limit)
{
    return rand() % upper_limit + 1;
}
