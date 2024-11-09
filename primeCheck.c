#include <stdio.h>

void main(){
    int len, i, j, flag;
    int arr[] = {12, 13, 2, 14, 16, 17};
    len = sizeof(arr) / sizeof(arr[0]);

    for (i=0; i<len; i++){
        flag =1;
        if (arr[i]==2){
            // printf("2 found\n");
            continue;
        }else{
        for(j=3; j<=(arr[i]/2); j++){
            if (arr[i]%j==0){
                flag = 0;
                break;
            }
        }
        }
        if(flag){
            printf("%d is a prime number.\n", arr[i]);
        }else{
            // printf("%d is not a prime number.\n", arr[i]);
        }
    }
}