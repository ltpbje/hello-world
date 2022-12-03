#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
	char arr1[] = "Welcome to earth!!!!";
	char arr2[] = "####################";
	int sz = sizeof(arr1) / sizeof(arr1[0]) - 2;
	int left = 0;
	int right = sz;
	while (left <= right)
	{
		arr2[right] = arr1[right];
		arr2[left] = arr1[left];
		right--;
		left++;
		printf("%s\n", arr2);
		Sleep(1000);//ÐÝÏ¢Ò»Ãë
		system("cls");//Çå¿ÕÆÁÄ»
	}
	printf("%s\n",arr2);
	return 0; 
}