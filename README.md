# Circular Queue Data Structure

This repository contains the implementation of a circular queue data structure in C. Circular queues are efficient for implementing buffer systems, job scheduling, and various other queue-related applications.

## Features

- **Circular Structure:** Efficiently utilizes storage by wrapping around when the end of the array is reached.
- **Dynamic Size:** Can handle a fixed number of elements with efficient memory usage.
- **Simplicity:** Easy-to-use API for common queue operations.

# API Reference

- **HndCircularQueue initCircularQueue(int cap);**
- **int enqueue(HndCircularQueue hnd, int val);**
- **int dequeue(HndCircularQueue hnd, int\* pVal);**
- **int getSize(HndCircularQueue hnd);**
- **int getCapacity(HndCircularQueue hnd);**
- **int isEmpty(HndCircularQueue hnd);**
- **void reset(HndCircularQueue hnd);**
- **void destroy(HndCircularQueue hnd);**
