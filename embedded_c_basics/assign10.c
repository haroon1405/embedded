// Write a function to find sum of 2 numbers.

#include <stdio.h>

int sum(int a, int b);

int main(){
    int num1=0,num2=0,result=0;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    result = sum(num1,num2);
    printf("The sum is %d",result);
}

int sum(int a, int b){
    return a+b;
}