#include<stdio.h>

typedef struct LNode
{
	ElemType data;              //���Ԫ��ֵ 
	struct LNode *next;         //ָ���̽�� 
} LinkNote;                     //������������ 

typedef int ElemType;

//ͷ�彨�������� 
void CreateListF(LinkNode *&L, ElemType a[], int n)
{
	LinkNode *s;
	L = (LinkNode *) malloc (sizeof(LinkNode));
	L->next = NULL;
	                                         //����ͷ��㣬��next����ΪNULL 
	for (int i = 0; i < n; i++) {							//ѭ���������ݽ��s 
		s = (LinkNode *) malloc (sizeof(LinkNode));			//
		s->data = a[i];										//�������ݽ��s 
		s->next = L->next;									//�����s���뵽ԭ�׽��֮ǰ��ͷ���֮�� 
		L->next = s;
	}	
}

//β�巨����������
void CreateListR(LinkNode *&L, ElemType a[], int n)
{
	LinkNode *s, *r;
	L = (LinkNode *) malloc (sizeof(LinkNode));			   //����ͷ��� 
	r = l;													//rʼ��ָ��β��㣬��ʼʱָ��ͷ��� 
	
	for (int i = 0; i < n; i++) {							//ѭ���������ݽ�� 
		s = (LinkNode *) malloc (sizeof(LinkNode));			
		s->data = a[i];										//�������ݽ��s 
		s->next = s;										//�����s�嵽���r֮�� 
		r = s;
	} 
	r->next = NULL;											//β����next����ΪNULL 
} 

void InitList(LinkNode *&L)   		//��ʼ������ 
{
	L = (Linknode *) malloc (sizeof(LinkNode));
	L->next = NULL;
}

void DestroyList(LinkNode *&L)		//�������� 
{
	LinkNode *pre = L, *p = L->next;
	
	while(p != NULL) {
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
} 
 
bool ListEmpty(LinkNode *L)		//�ж������Ƿ�Ϊ�� 
{
 	return (L->next = NULL);
}

int ListLength(LinkNode *L)		//�������� 
{
	int n = 0;
	LinkNode *p = L;
	
	while(p->next != NULL) {
		n++;
		p = p->next;
	}
	return n;
}

void DispList(LinkNode *L)		//������Ա� 
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

int LocateElem(LinkNode *L, ElemType e)		//��Ԫ��ֵ���� 
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

bool ListInsert(LinkNode *&L, int i, ElemType e)	//����Ԫ�� 
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

bool ListDelete(LinkNode *&L, int i, &e)	//ɾ��Ԫ�� 
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

