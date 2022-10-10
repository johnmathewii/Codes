#include<stdio.h>

int main()
{
    int a[6] ={1,2,3,4,5,6};
    switch(sizeof(a))
    {    
    case 1:
    case 2:
    case 3:
    case 24:
        printf("Hello World");
        break;    
    case 5:
        printf("HELLO");
        break;
    }
    printf("World \n");
    int c = sizeof(a);
    printf("%d\n",c);

    return 0;
}