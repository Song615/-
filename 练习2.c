//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAXSIZE 20
//
//typedef struct
//{
//	int data[MAXSIZE];				//���ܴﵽ����󳤶�
//	int last;						//ʵ�ʱ�=last+1
//}SeqList;
//
///*��ʼ��˳���*/
//SeqList *Init_SeqList()
//{
//	SeqList *L;
//	L = (SeqList *)malloc(sizeof(SeqList));		//���˳���Ĵ洢�ռ�
//	L->last = -1;								//��ʾ����û������Ԫ��
//	return L;
//}
//
//void merge(SeqList *A, SeqList *B, SeqList *C)
//{
//	int i, j, k;
//	i = 0; j = 0; k = 0;
//	while (i <= A->last && j <= B->last)
//	{
//		if (A->data[i] < B->data[j])
//			C->data[k++] = A->data[i++];
//		else C->data[k++] = B->data[j++];
//	}
//	while (i<=A->last)
//		C->data[k++] = A->data[i++];
//	while (j <= B->last)
//		C->data[k++] = B->data[j++];
//	C->last = k - 1;
//}
//
//main()
//{
//	SeqList *L, *M, *C;
//	int a[5] = { 0, 2, 4, 6, 8 }, b[5] = { 1, 3, 5, 7, 9 },i;
//	L = Init_SeqList();
//	M = Init_SeqList();
//	C = Init_SeqList();
//	for (i = 0; i <5; i++)
//	{
//		L->data[i] = a[i];
//		M->data[i] = b[i];
//	};
//	L->last = 4; M->last = 4;
//	for (i = 0; i <5; i++)
//	{
//		printf("%d ", L->data[i]);
//	};
//	printf("\n");
//	for (i = 0; i <5; i++)
//	{
//		printf("%d ", M->data[i]);
//	};
//	merge(L, M, C);
//	printf("\n");
//	for (i = 0; i <10; i++)
//	{
//		printf("%d ", C->data[i]);
//	};
//	getchar();
//}