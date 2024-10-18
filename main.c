#include <stdio.h>
#include <math.h>
int main()
{
    int cp , sp , p ,l ;
    printf("enter the cost price and selling price :");
    scanf("%d %d \n",&cp , &sp);
    p=sp - cp;
    l=cp - sp ;
    if(p > 0){
        printf("profit : %d\n",p);
    }
    else{
        printf("loss : %d\n",l);
    }
    return 0;
}
