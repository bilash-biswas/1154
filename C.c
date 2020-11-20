#include<stdio.h>
int main()
{
    int a,sum=0,count=0;
    double v;
    bilash:
    scanf("%d",&a);
    if(a>0)
    {
        sum=sum+a;
        count=count+1;
        goto bilash;
    }
    v=(double)sum/count;
    printf("%.2lf\n",v);

    return 0;
}
