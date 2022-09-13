
#include <stdio.h>

int main()
{
    int a,b,no=1;
    printf("enter the number :");
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        no*=b;
        printf("%d\n",no);
    }

    return 0;
}
