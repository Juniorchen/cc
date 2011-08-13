#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int *p;
    p = &i;
    i = 1;
    printf("%p\n", &i);
    printf("%d\n", *p);
    printf("%d\n", i);
    *p = 2;
    printf("%d\n", *i);

    return 0;
}
