#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    int i,j;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
        break;

        c=abs(a-b);
        if(c>=50)
        c=100-c;
        printf("%d\n",c);
    }
    return 0;
}
