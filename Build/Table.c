// write a program to print table of given number

#include<stdio.h>
void main()
{
     int n,i,table;
     printf("Enter a number:");
     scanf("%d",&n);
     for(i=1;i<=10;i++)
     {
                       table=i*n;
                       printf("\n");
                       printf("%d x %d = %d",n,i,table);
                       
                       getch();
                       }
                       }
