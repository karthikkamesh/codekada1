#include <stdio.h>
int main()
{
   char a[20];
   int i,count=0;
   printf("Enter the string:");
   scanf("%s",&a);
   for(i=0;a[i]!='\0';i++)
   {
       a[i]=a[i]-48;
       if((a[i]>=0)&&(a[i]<=9))
       {
           count++;
       }
   }
   if(count==0)
   {
       printf("NO");
   }
   else
   {
       printf("YES");
   }

    return 0;
}
