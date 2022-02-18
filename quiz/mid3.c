#include <stdio.h>
int main()
{
    int i, m, n;
    scanf("%d", &i);
    int a[i];
    for (m = 0; m < i; m++)
    {
        scanf("%d", &a[m]);
    }
    scanf("%d", &n);
    for (m = 0; m < i; m++)
    {
        a[m] = a[m] * n;
    }
    for (m = 0; m < i; m++)
    {
        printf("%d\n", a[m]);
    }
}