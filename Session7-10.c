#include <stdio.h>

int main(){
    int n, i, j, kiemtra = 0;
    printf("Nhập vào số phần tử trong mảng: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    if( kiemtra == 0 ){
        for (i = 0; i < n; i++) {
            int isPrime = 1;
            if ( arr[i] <= 1){
                isPrime = 0;
            }
            else{
                for (j = 2; j * j <= arr[i]; j++) {
                    if (arr[i] % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime)
            {
                printf("%d ", arr[i]);
                kiemtra = 1;
            }
        }
    }
    if (kiemtra == 0)
    {
        printf("Không có số nguyên tố nào trong mảng");
    }    
}