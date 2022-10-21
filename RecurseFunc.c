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

int DectoBin(int n)
{
    if(n==0)
        return 0;
    else
        printf("%d",n%2);
        DectoBin(n/2);
            
}

void StringRev(char str[], int size, int index)
{
    char temp;
    temp = str[index];
    str[index] = str[size-index];
    str[size-index] = temp;
    if (index == size/2)
    {
        return;
    }
    StringRev(str, size, index+1);
    
}

int IsPrime(int n)
{
    int isPrime = 1;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % 2 == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime; 
}

void func2(int num)
{
    int flag = 0;

    for (int i = 2; i <= num/2; i++)
    {
        if (IsPrime(i) == 1)
        {
            if (IsPrime(num - i) == 1)
            {
                printf("%d = %d + %d\n",num,i,num-i);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("There are no two prime no. to express the sum for %d",num);
    }
    
}

int main()
{
    //func1(89,67,45,41);
    //int power = pwr(2,3);
    //printf("%d",power);
    // int bin = DectoBin(30);
    // printf("%d",bin);
    // char str[] = {"INDIA"};
    // int size = sizeof(str)/sizeof(str[0]) - 1;
    // StringRev(str,size-1,0);
    // printf("%s",str);

    func2(13);

    
    return 0;
}