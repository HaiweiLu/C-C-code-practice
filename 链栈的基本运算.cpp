#include"listack.cpp"

int main()
{
	ElemType e;
	LinkStNode *s;
	printf("Basic oparetion of Listack:\n");
	printf("(1)Initialize stack s\n");
	InitStack(s);
	printf("(2)Stack is %s\n", (StackEmpty(s)) ? "empty" : "not empty");
	
	printf("(3)Element of Stack input element by element, a, b, c, d, e\n");
	Push(s, 'a');
	Push(s, 'b');
	Push(s, 'c');
	Push(s, 'd');
	Push(s, 'e');
	printf("(4)Stack is %s\n", (StackEmpty(s)) ? "empty" : "not empty");
	
	printf("(5)Stack output:");
	while( !StackEmpty(s) ) {
		Pop(s, e);
		printf("%c ", e);
	}	
	printf("\n");
	
	printf("(6)Stack is %s\n", (StackEmpty(s)) ? "empty" : "not empty");
	printf("(7)Relase stack\n");
	DestroyStack(s);
	return 1;
}
