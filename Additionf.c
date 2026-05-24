#include<stdio.h>

int Addition(int No1,int No2)
{
    int Result=0;
    Result=No1+No2;
    return Result;
}

int main()
{
int i=0,j=0,Ans=0;
printf("Enter First Number:\n");
scanf("%d",&i);
printf("Enter second Number:\n");
scanf("%d",&j);
Ans = Addition(i,j);
printf("Addition is %d",Ans);
return 0;
}
