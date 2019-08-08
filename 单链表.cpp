#include<stdio.h>

typedef struct LNode
{
	ElemType data;              //存放元素值 
	struct LNode *next;         //指向后继结点 
} LinkNote;                     //单链表结点类型 

typedef int ElemType;

//头插建立单链表 
void CreateListF(LinkNode *&L, ElemType a[], int n)
{
	LinkNode *s;
	L = (LinkNode *) malloc (sizeof(LinkNode));
	L->next = NULL;
	                                         //创建头结点，其next域置为NULL 
	for (int i = 0; i < n; i++) {							//循环建立数据结点s 
		s = (LinkNode *) malloc (sizeof(LinkNode));			//
		s->data = a[i];										//创建数据结点s 
		s->next = L->next;									//将结点s插入到原首结点之前，头结点之后 
		L->next = s;
	}	
}

//尾插法建立单链表
void CreateListR(LinkNode *&L, ElemType a[], int n)
{
	LinkNode *s, *r;
	L = (LinkNode *) malloc (sizeof(LinkNode));			   //创建头结点 
	r = l;													//r始终指向尾结点，创始时指向头结点 
	
	for (int i = 0; i < n; i++) {							//循环建立数据结点 
		s = (LinkNode *) malloc (sizeof(LinkNode));			
		s->data = a[i];										//创建数据结点s 
		s->next = s;										//将结点s插到结点r之后 
		r = s;
	} 
	r->next = NULL;											//尾结点的next域置为NULL 
} 

void InitList(LinkNode *&L)   		//初始化链表 
{
	L = (Linknode *) malloc (sizeof(LinkNode));
	L->next = NULL;
}

void DestroyList(LinkNode *&L)		//销毁链表 
{
	LinkNode *pre = L, *p = L->next;
	
	while(p != NULL) {
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
} 
 
bool ListEmpty(LinkNode *L)		//判断链表是否为空 
{
 	return (L->next = NULL);
}

int ListLength(LinkNode *L)		//求链表长度 
{
	int n = 0;
	LinkNode *p = L;
	
	while(p->next != NULL) {
		n++;
		p = p->next;
	}
	return n;
}

void DispList(LinkNode *L)		//输出线性表 
{
	LinkNode *p = L->next;
	
	while(p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	} 
	printf("\n");
}

bool GetElem(LinkNode *L, int i, ElemType &e)
{
	int j = 0;
	LinkNode *p = L;
	if (i <= 0)
		return false;
	
	while(j < i && p != NULL) {
		i++;
		p = p->next;
	} 
	
	if (p == NULL)
		return false;
	else {
		e = p->data;
		return true;
	}
}

int LocateElem(LinkNode *L, ElemType e)		//按元素值查找 
{
	int i = 1;
	LinkNode *p = L->next;
	
	while(p != NULL p->data != e) {
		p = p->next;
		i++;
	} 
	if (p == NULL)
		return 0;
	else
		return i;
}

bool ListInsert(LinkNode *&L, int i, ElemType e)	//插入元素 
{
	int j = 0;
	LinkNode *p = L, *s;
	if (i <= 0)
		return false;
		
	while (j < i-1 && p != NULL) {
		j++;
		p = p->next;
	}
	
	if (p == NULL)
		return false;
	else {
		s = (LinkNode *) malloc (sizeof(LinkNode));
		s->data = e;
		s->next = p->next;
		p->next = s;
		return true;
	}
}

bool ListDelete(LinkNode *&L, int i, &e)	//删除元素 
{
	int j = 0;
	LinkNode *p = L, *q;
	if (i <= 0)
		return false;
	
	while(j < i && p != NULL) {
		j++;
		p = p->next;
	}
	
	if (p == NULL)
		return false;
	else {
		q = p->next;
		if (q == NULL)
			return false;
		e = q->data;
		p->next = q->next;
		free(q);
		return true;
	}
}

