#include"Stack.h"
#include"queue.h"

void TestStack1()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);

	//StackPop(&st);
	//StackPop(&st);

	//printf("%d", StackTop(&st));


}

void TestStack2()
{
	ST st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);

	printf("%d\n", StackSize(&st));

	while (!StackEmpty(&st))
	{
		printf("%d", StackTop(&st));
		StackPop(&st);
	}
	StackDestroy(&st);
}

void TestQueue1()
{
	Queue q;
	QueueInit(&q);

	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	QueuePop(&q);
	QueuePop(&q);

	printf("%d\n", QueueSize(&q));

	printf("%d", QueueFront(&q));
	printf("%d", QueueBack(&q));
}

void TestQueue2()
{
	Queue q;
	QueueInit(&q);

	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	while (!QueueEmpty(&q))
	{
		printf("%d", QueueFront(&q));
		QueuePop(&q);
		printf("\t");
	}
	printf("\n");
}

int main()
{
	//TestStack1();
	//TestStack2();

	//TestQueue1();
	TestQueue2();
	return 0;

}