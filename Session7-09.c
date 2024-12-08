#include <stdio.h>

int main(){
    int i, j, row, col;
    printf("Nhập vào số hàng: ");
    scanf("%d", &row);
    printf("Nhập vào số cột: ");
    scanf("%d", &col);
    int arr[row][col];
    for ( i = 0 ; i < row ; i++ )
    {
        for ( j = 0; j < col ; j++ )
        {
            printf("Phần tử [%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }    
    }
    printf("Các phần tử nằm trên đường biên của ma trận:\n");
    // Trên cùng
    for ( j = 0 ; j < col ; j++ )
    {
        printf("%d ", arr[0][j]);
    }
    // Bên trái
    for ( i = row - 2 ; i > 0 ; i-- )
    {
        printf("%d ", arr[i][0]);
    }
    // Bên phải
    for ( i = 1 ; i < row - 1 ; i++ )
    {
        printf("%d ", arr[i][col - 1]);
    }
    // Dưới cùng
    if (row > 1){
        for ( j = col - 1 ; j >= 0 ; j-- )
        {
            printf("%d ", arr[row - 1][j]);
        }
    }
}