#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sapma(int dizi[], int n)
{
    int sum = 0, i, ort, varyans;

    for (i = 0; i < n; i++)
    {
        sum += dizi[i];
    }

    ort = sum / n;

    sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += (dizi[i] - ort) * (dizi[i] - ort);
    }

    varyans = sqrt(sum / n);

    return varyans;
}

int main()
{
    srand(time(NULL));

    int n, i;

    n = rand() % 5 + 5;

    int dizi[n];

    for (i = 0; i < n; i++)
    {
        dizi[i] = rand() % 101;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", dizi[i]);
    }

    printf("\n");

    printf("%d", sapma(dizi, n));
}
