#include<stdio.h>

int  data()
{
  int a, b,op;
  printf ("enter the + -  * \n");
  scanf ("%d", &op);
  printf ("enter the first number\n");
  scanf ("%d", &a);
  printf ("enter the second number\n");
  scanf ("%d", &b);
  
 
  switch(op){
      
      case 1:
      printf("answer is= %d ",a+b);
      break;
       case 2:
      printf(" answer is= %d  ",a-b);
      break;
       case 3:
      printf("answer is= %d",a*b);
      break;
       case 4:
      printf("answer is= %d ",a/b);
      break;
      default :
      printf("i nvalid choice !!!!");
      break ;
  }
  int main()
  {
      printf(" ..........MENU.......... \n");
    printf("1. Addition \n");
    printf("2. Subtration \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Exit program \n");
     data();
  }
 }
