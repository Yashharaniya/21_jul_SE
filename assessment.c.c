#include<stdio.h>

int
main ()
{
  int a, b, op;
  printf ("enter the + -  * %\n");
  scanf ("%c", &op);
  printf ("enter the first number\n");
  scanf ("%d", &a);
  printf ("enter the second number\n");
  scanf ("%d", &b); 
  
  switch(op){
      
      case '+':
      printf("answer is= %d ",a+b);
      break;
       case '-':
      printf(" answer is= %d  ",a-b);
      break;
       case '*':
      printf("answer is= %d",a*b);
      break;
       case '/':
      printf("answer is= %d ",a/b);
      break;
      default :
      printf("invalid choice !!!!");
      break ;
  }
}

