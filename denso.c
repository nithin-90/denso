#include<stdio.h>
#include<stdlib.h>
int main()
{
   int x,p,result=0;
   scanf("%d%d",&x,&p);
   p=100-p;
   while(x)
   {
       result=result+x;
       x=(p*x)/100;
   }
   printf("%d",result);
   return 0;
}
