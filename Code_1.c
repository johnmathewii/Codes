#include <stdio.h>


void Greatest(int a, int b, int c)
{
	if (a > b && a > c)
	{
		printf("%d is greatest \n", a);	
	}	
	else if (b > c)
	{
		printf("%d is the greatest \n", b);
	}
	else
	{
		printf("%d is the greatest \n", c);
	}	
		
	
}

void AreaOfCirc(int Rad){
	float pi = 3.14;
	double Area = pi * (Rad * Rad);
	printf("Area of Circle of radius %d is %.2f", Rad, Area);
}

void EvenOdd(int num)
{
	int c = num % 2; 
	if (c == 0)
	{
		printf("The integer is an even number.");
	}
	else
	{
		printf("The interger is an odd number");
	}
}

void Test(int n)
{
	int x = 0, y;
	while (n!=0)
	{
		y = n % 10;
		x = x * 10 + y;
		n = n/10;   
	}
	printf("Output is = %d \n",x);
}

void test2()
{
	int p=5000,t=4,si;
	float r = 7.5;
	si = p*t*r/100;
	int si1 = p*t*r;
	int si2 = p*t;  
	printf("%f %f %d",si, si1, si2);
}

void test3()
{
	int a = 0101;
	printf("\n a=%d\n",a);
}

void test4()
{
	int i=1, j=1;
	printf("%d\n",i++ && ++j);
	printf("%d %d\n",i,j);
}

int factorial(int n)
{

	if (n==0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);
	}
}

int smallest(int a, int b)
{
	if (a<b)
	{
		return a;
	}
	else
		return b;
}

void GCD(int x, int y)
{
	int gcd;
	int i = smallest(x,y);
	for(gcd = i; gcd >= 1; gcd--)
	{
		if( x%gcd == 0 && y%gcd == 0)
			break;

	}  
	printf("GCD of %d and %d is %d\n",x,y,gcd);
}

void power(int base, int exponent)
{
	int result;

	if(exponent == 0)
	{
		result = 1;
	}
	else
	{
		// printf("%d\n",result);
		result = 1;
		while(exponent!=0)
		{
			result = result * base;
			exponent--;
		}
	}
	printf("The result is: %d\n",result );
}

void firls(int n)
{
	int First_digit, Last_Digit;
	Last_Digit = n%10;
	First_digit = n;
	while(First_digit >= 10)
	{
		First_digit = First_digit/10;
	}
	printf("The sum of First Digit and Last Digit is %d \n", First_digit + Last_Digit);
}

void PerfectNo(int n)
{
	int i, sum=0;
	for (int i = 1; i < n; i++)
	{
		if (i%n == 0 )
		{
			sum+=i;
		}
		if (sum==n)
		{
			printf("The no. is perfect");
		}
		else
		{
			printf("The no. is not perfect.");
		}	 
	}
}

void countno(int a)
{
	int temp = a, count = 0;
	while (temp>0)
	{
		count++;
		temp/=10;
	}
	printf("The no. %d contains %d digits\n",a, count);
	
}

void Poftwo(int N)
{
	int count = 0, result = 1;
	while (!(result >= N))
	{
		result*=2;
		count++;
	}
	if(result == N)
	{
		printf("%d can be expressed as a power of 2 at exponent %d \n",N, count);	
	} 
	else
	{
		printf("%d cannot be expressed in the power of 2 \n",N);
	} 
}

void stars(int n)
{
	while (!n==0)
	{
		for (int i = 0; i < n; i++)
		{
			printf("*");
		}
		printf("\n");
		n--;
	}
	
}

int main()
{
	printf("hello world\n");	
	//Greatest(26,-5,2);
	//Test(32);
	//test4();
	// int fact = factorial(5);
	// printf("The factorial is %d\n",fact);
	//GCD(46,9);
	//power(4,8);
	//firls(45632);
	//countno(300);
	//Poftwo(8);
	stars(10);
	return 0;
}
