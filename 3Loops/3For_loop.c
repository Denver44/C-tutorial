#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, j = 0;
    for (i = 0; i <= 10; i++)
    {
        printf("%d %d\n", i, j);
        j++;
    }

    return 0;
}
