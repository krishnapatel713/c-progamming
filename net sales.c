#include<stdio.h>
#include<conio.h>
void main()
{
float gross_sales,net_sales,discount;
printf("Enter gross sales");
scanf("%f",&gross_sales);

if(gross_sales>20000)
 {
  discount=gross_sales*0.15;
 }
else if(gross_sales>10000)
 {
     discount=gross_sales*0.10;
 }
else
 {
     discount=gross_sales*0.05;
 }
net_sales=gross_sales - discount;

printf("%f Gross Sales\n",gross_sales);
printf("%f Discount\n",discount);
printf("%f Net Sales\n",net_sales);
getch();
}
