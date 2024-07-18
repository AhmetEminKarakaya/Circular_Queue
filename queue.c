#include "queue.h"


HndCircularQueue initCircularQueue(int cap)
{
	HndCircularQueue hndQueue = (HndCircularQueue)malloc(sizeof(CircularQueue));

	if (hndQueue == NULL)
	{
		printf("initCircularQueue error...");
		return NULL;
	}

	hndQueue->pQueue = (int*)malloc(sizeof(int) * cap);
	if (hndQueue->pQueue == NULL)
	{
		printf("not enough memory error...");
		free(hndQueue);
		return NULL;
	}
	hndQueue->front = hndQueue->rear = hndQueue->size = 0;
	hndQueue->capacity = cap;

	return hndQueue;
}

int enqueue(HndCircularQueue hnd, int val)
{
	if (hnd->size >= hnd->capacity)
		return -1;

	hnd->pQueue[hnd->rear++] = val;

	hnd->size++;
	hnd->rear %= hnd->capacity;

	return 0;
}

int dequeue(HndCircularQueue hnd, int* pVal)
{
	if (hnd->size == 0)
		return -1;

	*pVal = hnd->pQueue[hnd->front];
	hnd->front %= hnd->capacity;
	hnd->front++;
	hnd->size--;

	return 0;
}

int getSize(HndCircularQueue hnd)
{
	return hnd->size;
}

int getCapacity(HndCircularQueue hnd)
{
	return hnd->capacity;
}

int isEmpty(HndCircularQueue hnd)
{
	return hnd->size == 0;
}

void reset(HndCircularQueue hnd)
{
	hnd->front = hnd->rear = hnd->size = 0;
}

void destroy(HndCircularQueue hnd)
{
	free(hnd->pQueue);
	free(hnd);
}