#include <stdio.h>

void main(){
    int len, n, m, i, temp;
    printf("Enter array length");
    scanf("%d", &n);
    int arr[n];
    for (i=0; i<n; i++){
        arr[i] = rand()%31;
    }
    len = sizeof(arr)/ sizeof(arr[0]);
    m = len;
    for (i=0;i<len/2;i++){
        temp = arr[i];
        arr[i] = arr[m-1];
        arr[m-1] = temp;
        m--;
    }

    for (i=0;i<len;i++){
        printf("%d\n",arr[i]);
    }
    // printf("The length of the array is : %d",len );

}