#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"

void SeqListInit(SL s)
{
	s.a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (s.a == NULL)
	{
		printf("�����ڴ�ʧ�ܣ�\n");
		exit(-1);
	}
	s.size = 0;
	s.capacity = 4;
}
//β�� βɾ ͷ�� ͷɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
//����λ�õĲ���ɾ��
void SeqListInsert��SL* ps, int pos, SLDataType x);
void SeqListErase��SL* ps, int pos);
