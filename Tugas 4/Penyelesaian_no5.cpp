#include <stdio.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int i, j, n;
    for (i = 0; i < 5; puts(""), ++i)
    {
        n = 0;
        for (j = 5; j > i; n += 2 * (j--))
        {
            if (j > i + 1)
            {
                printf("%d + ", 2 * j);
            }
            else
            {
                printf("%d ", 2 * j);
            }
        }
        for (int k = 0; k <= i; k++)
            printf("");
        printf("= %d", n);
    }
    printf("----------\n");
    printf("110\n");
    return (0);
}