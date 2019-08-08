#include"sqqueue.cpp"

int main()
{
	ElemType e;
	SqQueue *q;
	printf("Basic oparetion of SqQueue:\n");
	printf("(1)Initialize Queue q\n");
	InitQueue(q);
	
	printf("(2)Element of Queue input element by element, a, b, c\n");
	if (!enQueue(q, 'a'))
		printf("\t Tip: Queue full\n");
	if (!enQueue(q, 'b'))
		printf("\t Tip: Queue full\n");
	if (!enQueue(q, 'c'))
		printf("\t Tip: Queue full\n");
		
	printf("(3)Queue is %s\n", (QueueEmpty(q)) ? "empty" : "not empty");
	
	if (deQueue(q, e) == 0)
		printf("Queue is empty\n");
	else
		printf("(4)Queue output a element: %c\n", e);
		
	printf("(5)Element of Stack is in return, d, e, f\n");
	if (!enQueue(q, 'd'))
		printf("\t Tip: Queue full\n");
	if (!enQueue(q, 'e'))
		printf("\t Tip: Queue full\n");
	if (!enQueue(q, 'f'))
		printf("\t Tip: Queue full\n");
	
	printf("(6)Queue output:");
	while (!QueueEmpty(q)) {
		deQueue(q, e);
		printf("%c ", e);
	}
	
	printf("\n");
	printf("(7)Relase queue\n");
	DestroyQueue(q);
	
	return 1;
}	
