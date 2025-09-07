#include <stdio.h>
int main(){
    int a,b,xor_,xnor_;
    printf("enter a&b either 0 or 1: ");
    scanf("%d",&a);
    scanf("%d",&b);
    xor_=(!a&b)|(a&!b);
    xnor_=(!a&!b)|(a&b);
    printf("xor=%d\n",xor_);
    printf("xnor=%d\n",xnor_);
    return 0;
}