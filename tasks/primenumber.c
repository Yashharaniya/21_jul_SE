#include<stdio.h>
int  main( )
{
int  s, e, f, temp, i, j ;
printf(" Enter the Begining Number : ") ;
scanf("%d ",& s) ;
printf(" \n Enter the last Number : ") ;
scanf("%d ",& e) ;
printf(" \n Prime Numbers are :\n ") ;
for (  j = s ;  j <= e ;  j++ ) ;
{
f = 0 ;
for (  i = 2 ;  i < 5;  i++ );
{
if (  j % i == 0 )
f = f + 1 ;
}
if (  f == 0 )
printf(" \n %d " , j) ;
}
return  0  ;
}
