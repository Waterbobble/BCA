#include <stdio.h>

int main(void)
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n, i, val;
    printf("Enter the position of the array you want to mod ");
    scanf("%d", &n);
    printf("Enter the element you want to mod the array with ");
    scanf("%d", &val);
    array[n - 1] = val;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}