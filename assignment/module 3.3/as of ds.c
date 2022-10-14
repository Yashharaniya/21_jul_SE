#include<stdio.h>
int main()
{
    int a[5],b[5];
    int i,j,temp;
    printf("enter the number\n");
   for(i=0;i<5;i++)
   {
        scanf("%d ",&a[i]);//{5,4,3,2,1}
   }
  for(i=0;i<5;i++)
   {
       for(j=i+1;j<5;j++)
       {
       if(a[i]<a[j])
       {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           
       
       }
       }
     
   }

      for(i=0;i<5;i++)
	{
         printf("%d \n",a[i]);
		 //{5,4,3,2,1}
   }
    for(i=0;i<5;i++)
   {
        scanf("%d ",&b[i]);//{5,4,3,2,1}
   }
  for(i=0;i<5;i++)
   {
       for(j=i+1;j<5;j++)
       {
       if(b[i]>b[j])
       {
           temp=b[i];
           b[i]=b[j];
           b[j]=temp;
           
       
       }
       }
     
   }

      for(i=0;i<5;i++)
	{
         printf("%d \n",b[i]);
		 //{5,4,3,2,1}
   }
}
