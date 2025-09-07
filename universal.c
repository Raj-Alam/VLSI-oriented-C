#include <stdio.h>
int main(){
    int a,b,nand_,nor_;
    printf("enter a&b either 0 or 1: ");
    scanf("%d",&a);
    scanf("%d",&b);
    nand_=!(a&b);
    nor_=!(a|b);
    printf("nand=%d\n",nand_);
    printf("nor=%d\n",nor_);
return 0;
}