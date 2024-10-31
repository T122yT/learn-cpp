#include"List.h"

LTNode * ListInit() //  使用返回值处理实参无法改变问题
{
	LTNode * phead = (LTNode*)malloc(sizeof(LTNode));
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

LTNode* BuyListNode(LTDateType x)
{
	LTNode* newNode = (LTNode*)malloc(sizeof(LTNode));
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;

	return newNode;
}


void ListPushBack(LTNode* phead, LTDateType x)
{
	assert(phead);

	//LTNode* tail = phead->prev;  //  找尾节点
	//LTNode* newNode = (LTNode * )malloc(sizeof(LTNode));
	//newNode->data = x;


	//tail->next = newNode;
	//newNode->next = phead;
	//newNode->prev = tail;
	//phead->prev = newNode;
	ListInsert(phead, x);

}

void ListPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d\n", cur->data);
		cur = cur->next;
	}
}

void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	//LTNode* tail = phead->prev;
	//LTNode* tailPrev = tail->prev;

	//free(phead->prev);

	//tailPrev->next = phead;
	//phead->prev = tailPrev;
	ListErase(phead->prev);
}

void ListPushFront(LTNode* phead, LTDateType x)
{
	assert(phead);
	//LTNode * newNode = BuyListNode(x);
	//LTNode* next = phead->next;

	//newNode->next = next;
	//newNode->prev = phead;
	//phead->next = newNode;
	//next->prev = newNode;

	ListInsert(phead->next, x);
}

void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	//LTNode* next = phead->next;
	//LTNode* nextNext = next->next;

	//phead->next = nextNext;
	//nextNext->prev = phead;

	//free(next);

	ListErase(phead->next);
}

LTNode* ListFind(LTNode* phead, LTDateType x)
{
	assert(phead);
	LTNode* cur = phead->next;

	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//pos位置之前插入
void ListInsert(LTNode* pos, LTDateType x)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* newNode = BuyListNode(x);

	posPrev->next = newNode;
	newNode->next = pos;
	newNode->prev = posPrev;
	pos->prev = newNode;
}
//删除pos
void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;

	free(pos);
	pos = NULL;
}

void ListDestroy(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur->next != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}




