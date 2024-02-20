// WAP to implement simple calculator.

#include <stdio.h>

int main(){
    float num1=0,num2=0;
    char opr;
    printf("Enter first number : ");
    scanf("%f",&num1);
    printf("Enter second number : ");
    scanf("%f",&num2);
    printf("Enter the operation : ");
    scanf(" %c",&opr);
    switch(opr){
        case '+' : printf("Result is %0.2f",num1+num2);
                   break;
        case '-' : printf("Result is %0.2f",num1-num2);
                   break;
        case '*' : printf("Result is %0.2f",num1*num2);
                   break;
        case '/' : if(num2==0){
                      printf("Denominator cannot be zero");
                      break;
                   }
                   printf("Result is %0.2f",num1/num2);
                   break;
        default: printf("Enter valid operation");
                 break;
    }
    return 0;
}