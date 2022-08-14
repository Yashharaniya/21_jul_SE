#include<stdio.h>

void main(int argc, char *argv[] )  {
    
   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments\n");
   }
   else {
      printf("One argument expected.\n");
   }
   
   int targetYear = 2019 - 10;
   
   printf("Target Year: %d\n", targetYear);
   
   int newAge = argv[1] -targetYear;
   
   printf("New age : %d\n", newAge);
}