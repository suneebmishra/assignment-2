// Take two array as input, merge them and print it in reverse order using loop.

#include<stdio.h>

int num1[6] = {0,1,2,3,4,5};
int num2[4] = {6,7,8,9};
int num3[10] = {};
int n;

int main(){
    printf("array 1 = ");
    for (int i = 0; i<= 5; i++){    
    printf("%d ", num1[i]);
    num3[i] = num1[i];
    }
    printf("\n");

    printf("array 2 = ");
    for (int i = 0; i<=3; i++){
    printf("%d ", num2[i]);
    num3[i+6] = num2[i];
    }
    printf("\n");

    printf("array 3 = ");
    for(int j = 9;j>=0;j--){
        printf("%d ", num3[j]);
    }
    return 0;
}