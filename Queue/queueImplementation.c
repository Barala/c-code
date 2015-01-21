# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

struct Queue
{
	int front, rear, size; 
	unsigned capacity;
	int *Array;
};

struct Queue * createQueue( unsigned capacity)
{
	struct Queue * queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity = capacity;
	queue->rear = capacity -1;
	queue->front = 0;
	queue->size = 0;
	queue->Array = (int*)malloc(queue->capacity * sizeof(int));
	return queue;
}

int isFull(struct Queue *queue)
{
	return (queue->size == queue->capacity);
}

int isEmpty(struct Queue *queue)
{
	return (queue->size == 0);
}

void enqueue(struct Queue *queue, int item)
{
	if(isFull(queue))
		return ;
	queue->rear = (queue->rear+1)%queue->capacity;
	queue->Array[queue->rear] = item;
	queue->size = queue->size + 1;
	printf("%d Enqueued an item\n", item);
}

int dequeue(struct Queue *queue)
{
	if (isEmpty(queue))
	return INT_MIN;
	int item = queue->Array[queue->front];
	queue->front = (queue->front + 1)%queue->capacity;
	queue->size = queue->size -1;
	return item;
}

int front(struct Queue * queue)
{
	if(isEmpty(queue))
		return INT_MIN;
	return queue->Array[queue->front];
}

int rear(struct Queue * queue)
{
	if (isEmpty(queue))
		return INT_MIN;	
	return queue->Array[queue->rear];
}

int main()
{
	struct Queue *queue = NULL; 
	queue = createQueue(100);
	
	enqueue(queue,10);
	enqueue(queue,20);
	enqueue(queue,30);
	enqueue(queue,40);
	printf("%d Dequeued\n",dequeue(queue));
	printf("%d Dequeued\n",dequeue(queue));
	printf("Front item is %d\n", front(queue));
    printf("Rear item is %d\n", rear(queue));
	return 0;
}