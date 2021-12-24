#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void replaceWordInText(const char *text, const char *oldWord, const char *newWord) {
   int i = 0, cnt = 0;
   int len1 = strlen(newWord);
   int len2 = strlen(oldWord);
   for (i = 0; text[i] != '\0'; i++) {
      if (strstr(&text[i], oldWord) == &text[i]) {
         cnt++;
         i += len2 - 1;
      }
   }
   char *newString = (char *)malloc(i + cnt * (len1 - len2) + 1);
   i = 0;
   while (*text) {
      if (strstr(text, oldWord) == text) {
         strcpy(&newString[i], newWord);
         i += len1;
         text += len2;
      }
      else
      newString[i++] = *text++;
   }
   printf("New String : ");
   puts(newString);
   printf("\n");
}
int main() {
   char str[60];
   printf("Enter a string : ");
   gets(str);
   char c[] = "post";
   char d[] = "dak";
   char *result = NULL;
   printf("\n-------------------------------------------------\n");
   printf("Original string : ");
   puts(str);
   replaceWordInText(str, c, d);
   return 0;
}