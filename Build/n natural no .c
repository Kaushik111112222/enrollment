#include <stdio.h>
#include<conio.h>
int main()
{
    int n, sum = 0, i;
    float avg;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }

    printf("\nSum is = %d\n", sum);
    avg = sum / (float)n;
    printf("Avg is = %.2f\n", avg);
getch();
    return 0;
}
