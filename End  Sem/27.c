#include<stdio.h>
#include<string.h>
struct country
    {
     char name[40];
     char capital[40];
    };
void main(){
struct country str[200]={
                    "india","new delhi",
                    "japan","tokyo",
                    "italy","rome",
                    "france","paris",
                    "sri lanka","colombo",
                     };

    char temp[15];
    gets(temp);
    int pop=-1;
    for(int i=0;i<100;i++)
    {
        if(strcmp(temp,str[i].name)==0){
         pop=i;     
         printf("capital : ");
         printf("%s", str[pop].capital);  }
      
        if(strcmp(temp,str[i].capital)==0){
         pop=i;     
         printf("country : ");
         printf("%s", str[pop].name);    }
      
    }

}