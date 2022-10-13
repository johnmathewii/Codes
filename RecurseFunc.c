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



int main()
{
    int hcf = HCF(360,198);
    printf("HCF is %d", hcf);
   

    return 0;
}