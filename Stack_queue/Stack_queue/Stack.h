#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef struct Stack
{
	int* _a;
	int _top;//ջ���±�
	int _capacity;
}Stack;
void StackInit(Stack* pst);
void StackDestory(Stack* pst);

//��ջ
void StackPush(Stack*pst,int x);

//��ջ
void StackPop(Stack* pst);

//��ȡ���ݵĸ���
int StackSize(Stack* pst);

//����1�ǿգ�����0�Ƿǿ�
int StackEmpty(Stack* pst);

//��ȡջ��������
int StackTop(Stack* pst);


