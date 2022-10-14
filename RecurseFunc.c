#include<stdio.h>

int HCF(int a, int b)
{
    int rem = a%b;
    if(rem == 0)
    {
        return b;
    }
    else
    {
        HCF(b,rem);
    }
}


void func1(int a, int b, int c, int d)
{
    int m = HCF(a,b);
    int n = HCF(c,d); 
    int x;
    if (m>n)
    {
        x = HCF(m,n);
    }
    else
    {
        x = HCF(n,m);
    }
    
    printf("HCF is %d",x);     
    
}

int pwr(int m, int n)
{
    int q;
    if (n==0)
    {
        return 1;
    }
    else
        return m * pwr(m,n-1);
    
}

int main()
{
    //func1(89,67,45,41);
    int power = pwr(2,3);
    printf("%d",power);
    return 0;
}