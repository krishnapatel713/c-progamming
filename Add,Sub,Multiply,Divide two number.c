#include<stdio.h>
void main()
{
   float a,b;
   printf("enter number\n",a);
   scanf("%f",&a);

   printf("enter number\n",b);
   scanf("%f",&b);

   printf("sum = %f\n",a+b);
   printf("difference = %f\n",a-b);
   printf("product = %f\n",a*b);

   if(b!=0)
   printf("quotient = %f\n",a/b);

   else
   printf("division by zero is not possible\n");


}

