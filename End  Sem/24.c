// 24. Write a program to find the factorial of two given integers by using single function call.
#include<stdio.h>
int fact(int n)
{
    if(n>0)
    return n*fact(n-1);
    else
    return 1;
}
void main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>=0&&num2>=0)7 
    {
     printf("%d! = %d\n",num1,fact(num1));
     printf("%d! = %d",num2,fact(num2));
    }
}