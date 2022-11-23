# hello-world
My first repository
hello
//交换两变量的值的练习
#include<stdio.h>
#include<math.h>
void swap(int* pa,int* pb)
{
	int tem = 0;
	tem = *pa;
	*pa = *pb;
	*pb = tem;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a = %d,b = %d",a,b);
	return 0;
}
//打印100到200之间所有素数的练习
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int x = 0;
	for (x=2;x<n;x++)
	{
		if (n % x == 0)
			return 0;
	}
	return 1;	
}
int main()
{
	int i ;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d\n", i);
		else
			continue;
	}

	return 0;
}
//比较两个数大小的练习
#include<stdio.h>
int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int a ;
	int b ;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	printf("%d\n", Max(a, b));
}
//利用Goto语句判断输入的m是否为素数的练习
#include<stdio.h>
int Isprime(int m)
{
	int i = 0;
	if (m <= 1)
		return 0;
	for (i = 2; i < m ; i++)
	{
		if (m % i == 0)
			goto End;
	}
End:return i < m ? 0 : 1;
}
int main()
{
	int m = 0;
	int i = 0;
	printf("Input m:");
	scanf_s("%d", &m);
	if (Isprime(m) == 1)
	{
		printf("%d is a prime number\n", m);
	}
	else
		printf("%d is not a prime number\n",m);
}
//利用break语句判断ms是否为素数的练习
#include<stdio.h>
int Isprime(int m)
{
	int i = 0;
	if (m <= 1)
		return 0;
	for (i = 2; i < m ; i++)
	{
		if (m % i == 0)
			break;
	}
	return i < m ? 0 : 1;
}
int main()
{
	int m = 0;
	int i = 0;
	printf("Input m:");
	scanf_s("%d", &m);
	if (Isprime(m) == 1)
	{
		printf("%d is a prime number\n", m);
	}
	else
		printf("%d is not a prime number\n",m);
}
