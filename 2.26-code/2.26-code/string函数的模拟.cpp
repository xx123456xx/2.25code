#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//模仿string函数
//1.构建临时变量
//2.函数的递归
//3.指针相减
int my_string1(char* arr)
{
	int count=0;
while(*arr!='\0')
{
		count++;
		arr=arr+1;
}
return count;
}
int my_string2(char* arr)
{
	if(*arr!='\0')
	{
		return 1+my_string2(arr+1);
	}
	else
		return 0;
}
int my_string3(char* arr)
{
	char *start=arr;
	char *end=arr;
	while(*end!='\0')
	{
		end++;
	}
	return end-start;
}
int main()
{
	char arr[]="hellov ";
	int len1=0;
	int len2=0;
	int len3=0;
	len1=my_string1(arr);
	len2=my_string2(arr);
	len3=my_string3(arr);
	printf("len1=%d\n",len1);
	printf("len2=%d\n",len2);
	printf("len3=%d\n",len3);
	return 0;
}