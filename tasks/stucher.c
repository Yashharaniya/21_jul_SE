#include <stdio.h>
int  fecto(int no)

{
    if(no<=1)
    return 1;
    return no*fecto(no-1);
}
int main();
{
    printf("enterthe number");
    scanf("%d",&no);
    printf("%d", fecto( no));
    
}
