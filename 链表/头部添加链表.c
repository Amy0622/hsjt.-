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
//	node* newnode = (node*)malloc(sizeof(node));
//	if (newnode == NULL)
//	{
//		return NULL;
//	}
//	newnode->data = d;
//	newnode->next = NULL;
//	return newnode;
//}
//
// void pushfront(node** pphead,int d)
//{
//	 node* newnode=createnode(d);
//	 newnode->next = *pphead;
//	 *pphead = newnode;
//}
// 
// //尾插
// void tailpush(node* p,int d)
// {
//	 node* prev = NULL, * cur = p;
//	 while (cur != NULL)
//	 {
//		 prev = cur;
//		 cur = cur->next;
//	 }
//	 //prev指向最后一个节点
//	 node* newnode = (node*)malloc(sizeof(node));
//	 if (newnode == NULL)
//	 {
//		 return NULL;
//	 }
//	 newnode->next = NULL;
//	 newnode->data = d;
//	 prev->next = newnode;
// }
//
// void printnode(node* p)
// {
//	 while (p != NULL)
//	 {
//		 printf("%d->", p->data);
//		 p = p->next;
//	 }
//	 printf("NULL");
// }
//
//int main()
//{
//	node* p = NULL;
//	pushfront(&p, 1);
//	pushfront(&p, 2);
//	pushfront(&p, 3);
//	pushfront(&p, 4);
//	tailpush(p, 1);
//	tailpush(p, 2);
//	tailpush(p, 3);
//	tailpush(p, 4);
//	printnode(p);
//	return 0;
//}