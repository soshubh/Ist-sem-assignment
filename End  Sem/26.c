// 26. Write a program to read ten players records using array of structures 
// and print a team-wise list containing names of players with their batting average.
#include <stdio.h>
#include <string.h>
struct cricket
{
 char player_name[20];
 char team_name[20];
 float batting_avg;
};

void main() 
{ 
  int i=0,j=0,n;
  scanf("%d",&n);
  struct cricket p[n],t;
  for(i=0;i<n;i++)
   {
     printf("Enter Player Name : ");
     scanf("%s",p[i].player_name);
     printf("Enter Team Name : ");
     scanf("%s",p[i].team_name);
     printf("Enter Batting Average : ");
     scanf("%f",&p[i].batting_avg);
   }
  for(i=0;i<n-1;i++)
   {
    for(j=i;j<n;j++)
     {
      if(strcmp(p[i].team_name,p[j].team_name)>0)
       {
        t=p[i];
        p[i]=p[j];
        p[j]=t;
       }
     }
   }
  j=0;
  for(i=0;i<n;i++)
   {
    if(strcmp(p[i].team_name,p[j].team_name)!=0 || i==0)
     {
      printf("\n------------------------------");
      printf("\n Team Name       : %s",p[i].team_name);
      printf("\n\t\t-----");      
      j=i;
     }
      printf("\n Player Name     : %s",p[i].player_name);
      printf("\n Batting Average : %f",p[i].batting_avg);


   }
}