#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter 3 sides of triangle\n");
scanf("%d%d%d",&a,&b,&c);

if(a+b>c && a+c>b && b+c>a)
 {
   printf("valid triangle");
 }
 else
 {
     printf("it does not form valid triangle");
 }
 getch();
}
