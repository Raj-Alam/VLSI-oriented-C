#include <stdio.h>
int main(){
    int a,b,and_,or_,not_a,not_b;
    printf("enter a&b either 0 or 1: ");
    scanf("%d",&a);
    scanf("%d",&b);
    and_=a&b;
    or_=a|b;
    not_a=!a;
    not_b=!b;
    printf("not of a=%d\n",not_a);
    printf("not of b=%d\n",not_b);
    printf("and=%d\n",and_);
    printf("or=%d\n",or_);
    return 0;
}