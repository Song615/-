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
///*����Ԫ��*/
//int Insert_SeqList(SeqList *L,int i,int x)		//˳�������Ŀ��λ�ã������ֵ
//{
//	int j;
//	if(L->last == MAXSIZE-1)
//	{
//		printf("����\n");
//		return(-1);					//��ռ����������ܲ��룬����-1
//	}
//	if (i<1 || i>L->last + 1)		//������λ�õ���ȷ��
//	{
//		printf("λ�ô�\n");
//		return(0);					//λ�ô�����0
//	}
//	for (j = L->last; j >= i - 1; j--)
//		L->data[j + 1] = L->data[j];		//����ƶ�
//	L->data[i - 1] = x;						//��Ԫ�ز���
//	L->last++;								//ʹlast��Ȼָ�����һ��Ԫ��
//	return(1);								//����ɹ�������1
//}
//
///*ɾ��Ԫ��*/
//int Delete_SeqList(SeqList *L, int i)		//˳�������Ŀ��λ��
//{
//	int j;
//	if (i<1 || i>L->last + 1)			//���ձ��Լ�ɾ��λ�õĺϷ���
//	{
//		printf("�����ڵ�i��Ԫ��");
//		return(0);						//ɾ��ʧ�ܷ���0
//	}
//	for (j = i; j <= L->last; j++)
//		L->data[j - 1] = L->data[j];	//����ǰ��
//	L->last--;						
//	return(1);							//ɾ���ɹ�����1			
//}
//
///*��ֵ����*/
//int Location_SeqList(SeqList *L, int x)	//˳�������Ŀ��ֵ
//{
//	int i = 0;
//	while (i <= L->last && L->data[i] != x)
//		i++;
//	if (i > L->last)return(-1);			//����ʧ�ܷ���-1
//	else return(i+1);					//���ҳɹ�������λ��
//}
//
//main()
//{
//	SeqList *L;
//	int i,j,k,a;
//	L=Init_SeqList();
//	printf("��ʼ�ı�Ϊ�� ");
//	for(i=1;i<=10;i++)
//		{
//			L->data[i - 1] = i;
//			L->last = 10;
//			printf("%d ", L->data[i - 1]);
//		};
//	printf("\n");
//	printf("��ʼ��Ϊ�� %d\n", L->last);
//	scanf("%d", &k);
//
////	Insert_SeqList(L, 2, 0);		//����
//
////	Delete_SeqList(L,2);			//ɾ��
//
///*	printf("\n");
//	printf("�ı��ı� ");
//	for (i = 1; i <= L->last; i++)
//	{
//		printf("%d ", L->data[i - 1]);
//	};
//	printf("\n");
//	printf("Ŀǰ��Ϊ�� %d\n", L->last);
//*/
//
///*	a = Location_SeqList(L, k);		//��ֵ����
//	if (a == -1)printf("\n���û����%d", k);
//	else printf("\n��%d�ڱ��%dλ�ô�", k, a);
//*/
//
//	getchar();
//	getchar();
//}