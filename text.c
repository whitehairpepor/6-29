#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "kcdf";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//void my_strcpy(char* str, char* stp)
//{
//	char ret = 0;
//	while (*stp != '\0')
//	{
//		*str = *stp;
//		    str++;
//			stp++;
//	}
//	*str = *stp;
//}
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "kcdf";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//void my_strcpy(char* str, char* stp)
//{
//
//	while (*str++=*stp++)//因为\0的值为0所以当循环到\0时会自动停止
//	{
//		;
//	}
//
//}
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "kcdf";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<assert.h>
//char* my_strcpy(char* str,const char* stp)
//{
//	char* ret = str;//保存起始地址,返回值方便使用。
//	assert(str != NULL);//断言，有利于查找问题
//	assert(stp != NULL);//保证指针的有效性
//	while (*str++=*stp++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "kcdf";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	int s = 20;
//	const int* p = &n;//加了const值是没办法更改的。
//	p = 20;
//	//p = &s;
//	
//	printf("%d\n",n);
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	int s = 20;
//	 int* const p = &n;//加了const地址是没办法更改的。
//	p = 20;
//	//p = &s;
//	
//	printf("%d\n",n);
//	return 0;
//}
#include<assert.h>
int my_strlen(const char *arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr!= '\0');
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}