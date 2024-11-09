#include <stdio.h>
#include <stdlib.h>

void main(){
    int len, i;
    int arr[7];
    for (i=0; i<7; i++){
        arr[i] = rand()%31;
    }
    len = sizeof(arr)/ sizeof(arr[0]);

    printf("The length of the array is : %d", len);
}