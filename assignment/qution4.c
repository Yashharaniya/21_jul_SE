/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a,p,r,t;
    printf("p= principal:\n");
    printf("a= final amount: \n");
    printf("r= annual interest rate: \n");
    printf("t= time(in year)");
    scanf("%f%f%f%f",&a,&p,&r,&t);
    a=(p*r*t)/100;
  
    

    return 0;
}
