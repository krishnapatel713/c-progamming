#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,total;
float average;

printf("Enter marks for 3 subjects");
scanf("%d%d%d",&a,&b,&c);
total=a+b+c;
average=total/3.0;

printf("%d Total marks",total);
printf("%f Average marks",average);

if(a<35 || b<35 || c<35)
 {
   printf("Result:fail");
 }
 else if(average>70)
 {
      printf("Result:distinction");
 }
 else if(average>60)
 {
      printf("Result:1st class");
 }
 else if(average>50)
 {
      printf("Result:2nd class");
 }
 else if(average<35)
 {
      printf("Result:3rd class");
 }
 else
  {
      printf("fail");
  }
  getch();
 }


