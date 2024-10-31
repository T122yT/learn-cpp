#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SLTDateType;

typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead,SLTDateType x);
void SListPushFront(SLTNode** pphead, SLTDateType x);
void SListPopBack(SLTNode** pphead);
void SListPopFront(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead, SLTDateType x);
void SListInsert(SLTNode** pphead, SLTNode* pos,SLTDateType x);
void SListErase(SLTNode** pphead, SLTNode* pos);
SLTNode* SListReverse(SLTNode* phead);
SLTNode* SListMid(SLTNode* phead);
void SListDestroy(SLTNode* phead);






