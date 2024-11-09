#include <stdio.h>

void main()
{
    int len, max, min, i;
    int arr[] = {12, 77, 14, 16, 11};
    len = sizeof(arr) / sizeof(arr[0]);
    max = arr[0];
    min = arr[0];

    for (i = 1; i < len; i++){
        if (max < arr[i]){
            max = arr[i];
        }
        if (min > arr[i]){
            min = arr[i];
        }
    }

    printf("Max : %d,\t Min : %d", max, min);
}