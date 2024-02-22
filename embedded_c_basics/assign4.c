// WAP to find sum of digits of given number.

#include <stdio.h>

int main(){
    int num=0,digits=0,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    int test_num = num;
    for(int i=0; test_num!=0; i++){
        test_num/=10;
        digits++;
    }
    for(int i=digits; i>0; i--){
        sum += num%10;
        num /= 10;
    }
    printf("%d",sum);
}