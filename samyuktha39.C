#include<stdio.h>
void main()
{
   int a[10],i,temp,b;
   printf("\nenter the values\n");
   for(int i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   b=a[0];
   for(i=1;i<10;i++)
   {
      if(b<a[i])
      b=a[i];
   }
   printf("%d",b);
}
