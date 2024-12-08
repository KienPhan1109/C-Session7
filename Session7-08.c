#include <stdio.h>

int main(){
    int i, j, n, m;
    printf("Nhập vào số hàng: "); scanf("%d", &n);
    printf("Nhập vào số cột: "); scanf("%d", &m);
    int arr[n][m];
    printf("Nhập các phần tử của mảng:\n");
    for ( i = 0 ; i < n ; i++) {
        for ( j = 0 ; j < m ; j++) {
            printf("Phần tử [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Mảng 2 chiều là:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}