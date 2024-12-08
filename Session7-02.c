#include <stdio.h>

int main(){
    int arr[5], i;
    for (i = 0 ; i <5 ; i++){
        printf("Nhập vào số thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0 ; i < 5 ; i++){
        printf("%d\n", arr[i]);
    }
}