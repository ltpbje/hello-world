#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
	char password[20] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("输入密码:");
		scanf("%s",&password);
		if (strcmp(password, "123456") == 0)//==不能用来比较两个字符串是否相等,应该使用一个库函数-strcmp
		{
			printf("输入正确\n");
			break;
		}
		else
		{
			printf("错误,重新输入\n");
		}
	}
	if (i == 3)
		printf("输入错误\n");
	printf("");
	return 0;
}
