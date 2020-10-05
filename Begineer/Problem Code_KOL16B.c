//https://www.codechef.com/problems/KOL16B

#include <stdio.h>
#include <math.h>

#ifndef ONLINE_JUDGE
#define getcx getchar
#else
#define getcx getchar_unlocked
#endif

int scan(void);
int cmp(const void*, const void*);

int main()
{
    int i,x,t=scan();
    for(x=1;x<=t;x++)
    {
        int n=scan();
        int A[n],B[n];
        for(i=0;i<n;i++)
        {
            int encoded=scan();
            B[i]=encoded>>16;
            A[i]=encoded^(B[i]<<16);
        }
        printf("Case %d:\n",x);
        for(i=0;i<n;i++)
            printf("%d ",A[i]);
        printf("\n");
        for(i=0;i<n;i++)
            printf("%d ",B[i]);
        printf("\n");
    }
    return 0;
}

int scan()
{
    int num=0,sign=1;
    char c='\0';
    while(c<'0'||c>'9')
    {
        c=getcx();
        if (c=='-')
        {
            sign=-1;
            c=getcx();
            break;
        }
    }
    while(c>='0' && c<='9')
    {
        num=num*10+c-'0';
        c=getcx();
    }
    return num*sign;
}

int cmp(const void* a,const void* b)
{
    long long* x=(long long*)a;
    long long* y=(long long*)b;
    if(*x<*y)
        return 1;
    if(*x>*y)
        return -1;
    return 0;
}
