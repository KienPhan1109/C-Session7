#include <stdio.h>

int main(){
    int n, i, temp;
    printf("Nhập số phần tử trong mảng: ");
    scanf("%d", &n);
    int arr[n];
    for ( i = 0 ; i < n ; i++)
    {
        do{
            printf("Nhập vào phần tử thứ %d: ", i+1);
            scanf("%d", &temp);
            if (temp % 2 == 0){
                printf("Phần tử nhập vào phải là số lẻ\n");
            }
        }
        while (temp % 2 == 0);
        {
            arr[i] = temp;
        }
    }
    printf("Mảng đã nhập vào là: \n");
    for ( i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
}