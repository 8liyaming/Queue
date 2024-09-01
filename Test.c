#include "Queue.h"

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
	QueuePop(&q);
	QueuePop(&q);
	//QueuePop(&q);

	//printf("%d\n", QueueFront(&q));
	//printf("%d\n", QueueBack(&q));

	QueuePush(&q, 10);
	QueuePush(&q, 20);

	QueueDestroy(&q);
}

void TestQueue2()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QDataType front = QueueFront(&q);
	printf("%d ", front);
	QueuePop(&q);

	QueuePush(&q, 3);
	QueuePush(&q, 4);

	while (!QueueEmpty(&q))
	{
		QDataType front = QueueFront(&q);
		printf("%d ", front);
		QueuePop(&q);
	}
	printf("\n");
}

int main()
{
	TestQueue2();

	return 0;
}