#include <stdio.h>

int main(){
    int arr[5], i, kiemtra = 0;
    for (i = 0 ; i < 5 ; i++){
        printf("Nhập vào số thứ %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 0 ; i < 5 ; i++){
        if (arr[i] % 2 ==0)
        {
            printf("%d\n", arr[i]);
            kiemtra++;
        }
        
    }
    if (kiemtra == 0){
        printf("Mảng không chứa số chẵn");    
    }
}