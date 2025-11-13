#include <stdio.h>

int main()
{
    int n, i, flag = 1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("The numbers are in ascending order.\n");
    else
        printf("The numbers are NOT in ascending order.\n");

    return 0;
}
