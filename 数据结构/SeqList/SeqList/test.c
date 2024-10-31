#include "SeqList.h"

void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);	//β��
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);	//βɾ
	//SeqListPopBack(&sl);
	//SeqListPopBack(&sl);
	//SeqListPopBack(&sl);
	////SeqListPopBack(&sl);
	////SeqListPopBack(&sl);
	SeqListPushFront(&sl, 10);	//ͷ��
	SeqListPushFront(&sl, 20);

	SeqListPopFront(&sl);	//ͷɾ 
	SeqListPopFront(&sl);

	SeqListPrint(&sl);

	//SeqListPushBack(&sl, 10);
	//SeqListPushBack(&sl, 20);
	//SeqListPrint(&sl);

	SeqListDestory(&sl);
}

void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);	//β��
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListInsert(&sl, 2, 10);	//�в�

	SeqListErase(&sl, 2);

	SeqListPrint(&sl);

	//printf("%d",SeqListFind(&sl, 4));	//����

	SeqListDestory(&sl);
}

int main()
{
	//TestSeqList1();
	TestSeqList2();

	return 0;
}
