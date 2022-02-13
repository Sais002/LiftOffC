
#include<stdio.h>
int main()
{
    int op,num1,num2;
    printf("Enter a number1 :");
    scanf("%d,&num1");
    printf("Enter a number2 :");
    scanf("%d,&num2");
    printf("Enter your choice:");
    scanf("%d",&op);
    switch(op)
    {
     case1:
        printf("%d+%d:%d",num1,num2,num1 + num2);
        break;

     case2:
        printf("%d-%d:%d",num1,num2,num1 - num2);
        break;
     case3:
        printf("%d*%d:%d",num1,num2,num1 * num2);
        break;
     case4:
        printf("%d/%d:%d",num1,num2,num1 / num2);
        break;
    }


    return 0;
}       