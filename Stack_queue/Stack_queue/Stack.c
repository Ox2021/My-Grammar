#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
void StackInit(Stack* pst)
{
	assert(pst);
	pst->_a = malloc(sizeof(int) * 4);
	pst->_top = 0;
	pst->_capacity = 4;
}
void StackDestory(Stack* pst)
{
	assert(pst);
	free(pst->_a);
	pst->_a = NULL;
	pst->_top = pst->_capacity = 0;
}
//��ջ
void StackPush(Stack* pst, int x)
{
	assert(pst);
	if (pst->_top == pst->_capacity)
	{
		pst->_capacity *= 2;//ÿ�����ݿռ�Ĵ�СΪ��һ�ε�����
		int* tmp = (int*)realloc(pst->_a, sizeof(int) * pst->_capacity);
		if (tmp == NULL)//�ж��Ƿ��ڴ�����ɹ�
		{
			printf("�ڴ治��!\n");
			exit(-1);
		}
		else
		{
			pst->_a = tmp;
		}
	}
	pst->_a[pst->_top] = x;
	pst->_top++;

}
//��ջ
void StackPop(Stack* pst)
{
	assert(pst);//�ж�ָ�����Ч��
	assert(pst->_top > 0);
	--pst->_top;
}
//��ȡ���ݵĸ���
int StackSize(Stack* pst)
{
	assert(pst);//�ж�ָ�����Ч��
	return pst->_top;
}
//����1�ǿգ�����0�Ƿǿ�
int StackEmpty(Stack* pst)
{
	assert(pst);//�ж�ָ�����Ч��
	return pst->_top == 0 ? 1 : 0;
	//return !pst->_top;
}
//��ȡջ��������
int StackTop(Stack* pst)
{
	assert(pst);//�ж�ָ�����Ч��
	assert(pst->_top > 0);
	return pst->_a[pst->_top - 1];
}


