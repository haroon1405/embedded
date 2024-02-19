// WAP to find Maximum of three numbers

#include <stdio.h>

int main(){
    int num1=0, num2=0,num3=0, max_num=0;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    if(num1==num2 && num2==num3){
        printf("Numbers are equal");
        return 0;
    }
    max_num = (num1 > num2)? ((num1 > num3)? (num1):(num3)) : ((num2 > num3)? (num2):(num3));
    printf("The maximum number is : %d",max_num);
    return 0;
}