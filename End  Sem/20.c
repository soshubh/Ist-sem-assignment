//20. A palindrome is a string which reads same forward and backward. 
// Write a program to detect whether the input string is a palindrome or not. 
#include <stdio.h>
#include <string.h>
void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome!\n", str);
            return;
        }
    }
    printf("%s is a palindrome!\n", str);
}
void main()
{
   char str[50];
   gets(str);
   isPalindrome(str);
}