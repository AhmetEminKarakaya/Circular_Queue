#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int* pQueue;
	int rear;
	int front;
	int capacity;
	int size;
}CircularQueue,*HndCircularQueue;

HndCircularQueue initCircularQueue(int cap);
int enqueue(HndCircularQueue hnd, int val);
int dequeue(HndCircularQueue hnd, int* pVal);
int getSize(HndCircularQueue hnd);
int getCapacity(HndCircularQueue hnd);
int isEmpty(HndCircularQueue hnd);
void reset(HndCircularQueue hnd);
void destroy(HndCircularQueue hnd);