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
//	while (*str++=*stp++)//��Ϊ\0��ֵΪ0���Ե�ѭ����\0ʱ���Զ�ֹͣ
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
//	char* ret = str;//������ʼ��ַ,����ֵ����ʹ�á�
//	assert(str != NULL);//���ԣ������ڲ�������
//	assert(stp != NULL);//��ָ֤�����Ч��
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
//	const int* p = &n;//����constֵ��û�취���ĵġ�
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
//	 int* const p = &n;//����const��ַ��û�취���ĵġ�
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