#include<stdio.h>

int main()
{
    int h,m,mm,k;

    scanf("%d:%d",&h,&m);
    scanf("%d",&mm);
    k = (h*60)+m+mm;
    h =(k/60)%24;
    m = k%60;
    printf("%02d:%02d\n",h,m);

    return 0;
}