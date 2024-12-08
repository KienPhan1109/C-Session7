#include <stdio.h>

int main(){
    int n, i, max, min, arr[5];
    for (i = 0 ; i <5 ; i++){
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = 0;
    for (i = 0 ; i <5 ; i++){
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    for (i = 0 ; i <5 ; i++){
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    printf("Giá trị nhỏ nhất là: %d\n", min);
    printf("Giá trị lớn nhất là: %d\n", max);
}