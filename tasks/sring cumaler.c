#include <stdio.h>  
int compare(char[],char[]);  
int main()  
{  
   char str1[99]; 
   char str2[99];   
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);  
   int c= compare(str1,str2);   
   if(c==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
  
    return 0;  
}  int compare(char a[],char b[])  
{ 
    int J=0,i=0;    
    while(a[i]!=0 &&b[i]!=0)   
    {  
       if(a[i]!=b[i])  
       {  
           J=1;  
           break;  
       }  
       i++;  
    }                                   
    if(J==0)  
    return 0;  
    else  
    return 1;  
}  
