#pragma once
#include<stdio.h>
#include<stdlib.h>

//˳�����Ч�����������б�����������
typedef int SLDataType;
#define N 10
typedef struct SeqList
{
	SLDataType* a; 
	int size;      //��Ч���ݵĸ���
	int capacity;  //�����ռ�Ĵ�С
}SL, SeqList;
//β�� βɾ ͷ�� ͷɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
//����λ�õĲ���ɾ��
void SeqListInsert��SL* ps, int pos, SLDataType x��;
void SeqListErase��SL* ps, int pos��;