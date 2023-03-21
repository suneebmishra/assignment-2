// Write a program to count the number of occurrences of a number in an array using function

#include<stdio.h>

int num[16] = {0 , 1 , 3, 3 , 4,4,4,5,5,6,7,7,7,8,8,9};
int n;
int repeat = 0;

void number(){
     printf("enter a number between 0 to 9 to see no. of occurence in the above array : ");
    scanf("%d" , &n);


    for (int i = 0; i<= 15; i++){
        if (n == num[i]){
        repeat+= 1;
        }
    }
    
    if(repeat != 0){
    printf("%d is repeatd %d times in the above array ", n ,repeat);
    }
    else{
        printf("%d has no occcurence in the above array ",n);
    }
}

int main(){
    for (int i = 0; i<= 15; i++){
    printf("%d ", num[i]);
    }
    printf("\n");

    number();

   
    return 0;
}