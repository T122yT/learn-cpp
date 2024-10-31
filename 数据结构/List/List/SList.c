#include"SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("data->%d\n", cur->data);
		cur = cur->next;
	}

}

SLTNode* BuySListNode(SLTDateType x)
{
	//开辟新节点
	SLTNode* newNode = malloc(sizeof(SLTNode));
	if (newNode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

void SListPushBack(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newNode = BuySListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//找到当前列表的尾节点
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//插入链表
		tail->next = newNode;
	}	
}

void SListPushFront(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newNode = BuySListNode(x);
	newNode->next = *pphead;

	*pphead = newNode;
}

void SListPopBack(SLTNode** pphead)
{
	if (*pphead == NULL)
	{
		printf("NULL");
		return;
	}

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;

		prev->next = NULL;
	}
}

void SListPopFront(SLTNode** pphead)
{
	if (*pphead == NULL)
	{
		printf("NULL");
		return;
	}

	SLTNode* newhead = (*pphead)->next;
	free(*pphead);
	*pphead = newhead;
}

SLTNode* SListFind(SLTNode* phead, SLTDateType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x)
{
	SLTNode* newnode = BuySListNode(x);
	if (*pphead == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		// 找到pos的前一个位置
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}

		posPrev->next = newnode;
		newnode->next = pos;
	}
}

void SListErase(SLTNode** pphead, SLTNode* pos)
{
	if (*pphead == pos)
	{
		*pphead = pos->next;
		free(pos);
		pos = NULL;
	}
	else
	{
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}
		posPrev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

SLTNode* SListReverse(SLTNode* phead)
{
	if (phead == NULL)
	{
		return NULL;
	}

	SLTNode* n1 = NULL;
	SLTNode* n2 = phead;
	SLTNode* n3 = phead->next;

	while (n2)
	{
		n2->next = n1;
		n1 = n2;
		n2 = n3;
		if (n3)
		{
			n3 = n3->next;
		}
	}
	return n1;
}

SLTNode* SListMid(SLTNode* phead)
{
	SLTNode* slow = phead;
	SLTNode* fast = phead;

	while (fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}


void SListDestroy(SLTNode** pphead)
{


}


