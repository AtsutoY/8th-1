#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 10; i++)
    {
        j = powint(2, i);  // 2��i��̌v�Z
        printf("%d\t%d\n", i, j);
    }

    return 0;
}
