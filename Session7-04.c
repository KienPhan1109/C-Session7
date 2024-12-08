#include <stdio.h>

int main(){
    int n;
    printf("Nhập vào số phần tử trong mảng: "); 
    scanf("%d", &n);
    int i, arr[n];
    for (i = 0; i < n; i++) {
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}