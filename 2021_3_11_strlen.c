#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//str++��˼�����ĵ�ַ��һ���ҵ���һ���ַ��ĵ�ַ�� 
	}
	return count;
}
int main(void)
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	strlen
}
