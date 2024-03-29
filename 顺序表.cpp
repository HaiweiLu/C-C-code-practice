#include<stdio.h>
#include<malloc.h>
#define Maxsize 50
typedef char ElemType;
typedef struct{
	int data[Maxsize];
	int length;
} SqList;

void CreateList(SqList *&L, ElemType a[], int n)
{
	L = (SqList *) malloc (sizeof(SqList));
	for(int i = 0; i < n; i++)
		L->data[i] = a[i];
	L->length = n;
} 
 
void InitList(SqList *&L)
{
	L = (SqList *) malloc (sizeof(SqList));
	L->length = 0;
 } 
 
 void DestroyList(SqList *&L)
 {
 	free(L);
 }
 
 bool ListEmpty(SqList *L)
 {
 	return (L->length == 0);
 }
 
 int ListLength(SqList *L)
 {
 	return (L->length);
  } 
 
 int DispList(SqList *L)
 {
 	for(int i = 0; i< L->length; i++)
 		printf("%c", L->data[i]);
 	printf("\n");
 }
 
 bool GetElem(SqList *L, int i, ElemType &e)
 {
 	if (i < 1 || i > L->length)
 		return false;
 	e = L->data[i-1];
 	return true;
 }
 
 int LocateElem(SqList *L, ElemType e)
 {
 	int i = 0;
 	while( i < L->length && L->data[i] != e )
 		i++;
 	if ( i >= L->length )
 		return 0;
 	else
 		return i+1;
 }
 
 bool ListInsert(SqList *&L, int i, ElemType e)
 {
 	int j;
 	if(i < 1 || i > L->length+1)
 		return false;
 	i++;
 	for( j = L->length; j > i; j--)
 		L->data[j] = L->data[j-1];
 	L->data[i] = e;
 	L->length++;
 	return true;
 }
 
 int ListDelete(SqList *&L, int i, ElemType &e)
 {
 	int j;
 	if (i < 1 || i > L->length)
 		return false;
 	else
 		for(i = j; j < L->length; j++)
 			L->data[j] = L->data[j+1];
 	L->length--;
 	return true;
 }
 
 int main()
 {
 	SqList *L;
 	ElemType e;
 	printf("顺序表基本运算如下：\n");
 	printf("(1)初始化顺序表L\n");
 	InitList(L);
 	printf("(2)一次插入a,b,c,d,e元素\n");
 	ListInsert(L, 1,'a');
 	ListInsert(L, 2,'b');
 	ListInsert(L, 3,'c');
 	ListInsert(L, 4,'d');
 	ListInsert(L, 5,'e');
 	printf("(3)输出顺序表L: ");
 	DispList(L);
 	printf("(4)顺序表长度: %d\n", ListLength(L));
 	printf("(5)顺序表L为%s\n", ListEmpty(L) ? "空" : "非空");
	GetElem(L, 3, e);
	printf("(6)顺序表L的第三个元素: %c\n", e);
	printf("(7)元素a的位置：%d\n", LocateElem(L, 'a'));
	printf("(8)在第四个位置上插入f元素\n");
	ListInsert(L, 4, 'f');
	printf("(9)输出顺序表L:");
	DispList(L);
	printf("(10)删除L的第三元素\n");
	ListDelete(L, 3, e);
	printf("(11)输出顺序表L:");
	DispList(L);
	printf("(12)释放顺序表L\n");
	DestroyList(L);
	return 1; 
 }
