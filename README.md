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
//设置标志变量
#include<stdio.h>
#include<math.h>
int Isprime(int m)
{
	int i = 0;
	int flag = 1;
	double a;
	if (m <= 1) 
		flag = 0;		
	for (i = 2;(i < sqrt(m))&&flag; i++)
	{
		if (m % i == 0)
			flag = 0;
	}
	return flag;
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
//输出零到一百之间的所有的奇数
#include<stdio.h>
int main()
{
	int i;
	int number = 19;
	for(i = 1;i<=100;i++)
	if (i % 2 == 1)
		printf("%d is odd number\n",i);
	return 0;
}
//输出零到一百之间的所有的奇数
//switch语句
#include<stdio.h>
int main()
{
	int i;
	int number = 19;
	for(i = 1;i<=100;i++)
		switch (number = i % 2)
		{
		case 1:
			printf("%d is odd number\n", i);
			break;
		}
		return 0;
}
//contiune导致死循环
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}
//EOF文件结束标志
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch)
	}
	return 0;
}
//一个练习
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ret = 0;
	char password[20] = {0};
	printf("输入密码\n");
	scanf("%s",&password);
	while (getchar() != '\n')
	{
		;
	}
	printf("请确认(Y/N):>\n");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("输入正确\n");
	}
	else if (ret == 'N')
	{
		printf("取消输入\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i=1;
	int j = 1;
	for (;i<=3;i++)
	{
		for(;j<=2;j++)
		printf("hehe\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i=1;
	int j = 1;
	for (i=1;i<=3;i++)
	{
		for (j=1; j <= 2; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印n的阶乘
int main()
{
	int n,i;
	int ret = 1;
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("%d!=%d",n,ret);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印n阶乘和
int main()
{
	int n,i,j;
	int ret = 1;
	int sum = 0;
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum = ret + sum;
		
	}
	printf("%d",sum);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;
    int i = 0;
    int sz = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < sz; i++)
    {
        if (k ==a[i])
        {
            printf("找到了下标为%d\n",i);
            break;
        }
    }
    if (i == sz)
    {
        printf("找不到\n");
    }
    return 0;
}
