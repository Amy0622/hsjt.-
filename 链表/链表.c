//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node
//{
//	int data;
//	struct node* next;
//}node;
//
//node* createnode(int d)
//{
//	node* p = (node*)malloc(sizeof(node));
//	if (p == NULL)
//	{
//		perror(p);
//		return NULL;
//	}
//	else
//	{
//		p->data = d;
//		p->next = NULL;
//		return p;
//	}
//}
//
//void printlist(node* p)
//{
//	while (1)
//	{
//		printf("%d ", p->data);
//		if (p->next != NULL)
//		{
//			//p++;链表在内存中是不连续分配的
//			p = p->next;
//		}
//		else
//		{
//			break;
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	node* p[10] = { 0 };
//	int i;	
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = createnode(arr[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		p[i]->next = p[i + 1];
//	}
//	printlist(p[0]);
//	return 0;
//}