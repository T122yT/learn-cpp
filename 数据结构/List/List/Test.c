//#include"SList.h"
//
//void TestSList1()
//{
//	SLTNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//	SListPopBack(&plist);
//
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//	SListPopFront(&plist);
//
//	SListPrint(plist);
//}
//
//void TestSList2()
//{
//	SLTNode* plist = NULL;
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 4);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 4);
//	SListPrint(plist);
//
//	   
//	SLTNode* pos = SListFind(plist, 2);
//	int i = 1;
//	while (pos)
//	{
//		printf("第%d个2在%p位置，%d", i++, pos, pos->data);
//		pos = SListFind(pos->next, 2);
//	}
//
//	  ޸  3->30
//	pos = SListFind(plist, 3);
//	if (pos)
//	{
//		pos->data = 30;
//	}
//	SListPrint(plist);
//}
//
//void TestSList3()
//{
//	SLTNode* plist = NULL;
//	SLTNode* replist = NULL;
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//
//	replist = SListReverse(plist);
//
//	SLTNode* pos = SListFind(plist, 3);
//	SListInsert(&plist, pos, 30);
//
//	SLTNode* pos1 = SListFind(plist, 30);
//	SListErase(&plist, pos1);
//
//	SListDestroy(&plist);
//	int mid = SListMid(plist)->data;
//	SListPrint(replist);
//	printf("%d\n", mid);
//}
//
//int main()
//{
//	TestSList1();
//	TestSList2();
//	TestSList3();
//
//	return 0;
//}

#include"List.h"

void TestList1()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);

	ListPopBack(plist);
	ListPopBack(plist);

	ListPrint(plist);
}

void TestList2()
{
	LTNode* plist = ListInit();
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);

	ListPopFront(plist);

	ListPrint(plist);
}

void TestList3()
{
	LTNode* plist = ListInit();
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);

	LTNode* f = ListFind(plist, 2);
	//ListInsert(f, 1);
	ListErase(f);

	ListPrint(plist);
}

int main()
{
	//TestList1();
	TestList2();
	//TestList3();


	return 0;
}