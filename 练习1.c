//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAXSIZE 20
//
//typedef struct 
//{
//	int data[MAXSIZE];				//表能达到的最大长度
//	int last;						//实际表长=last+1
//}SeqList;
//
///*初始化顺序表*/
//SeqList *Init_SeqList()
//{
//	SeqList *L;
//	L = (SeqList *)malloc(sizeof(SeqList));		//获得顺序表的存储空间
//	L->last = -1;								//表示表中没有数据元素
//	return L;
//}
//
///*插入元素*/
//int Insert_SeqList(SeqList *L,int i,int x)		//顺序表名，目标位置，插入的值
//{
//	int j;
//	if(L->last == MAXSIZE-1)
//	{
//		printf("表满\n");
//		return(-1);					//表空间已满，不能插入，返回-1
//	}
//	if (i<1 || i>L->last + 1)		//检查插入位置的正确性
//	{
//		printf("位置错\n");
//		return(0);					//位置错，返回0
//	}
//	for (j = L->last; j >= i - 1; j--)
//		L->data[j + 1] = L->data[j];		//结点移动
//	L->data[i - 1] = x;						//新元素插入
//	L->last++;								//使last仍然指向最后一个元素
//	return(1);								//插入成功，返回1
//}
//
///*删除元素*/
//int Delete_SeqList(SeqList *L, int i)		//顺序表名，目标位置
//{
//	int j;
//	if (i<1 || i>L->last + 1)			//检查空表以及删除位置的合法性
//	{
//		printf("不存在第i个元素");
//		return(0);						//删除失败返回0
//	}
//	for (j = i; j <= L->last; j++)
//		L->data[j - 1] = L->data[j];	//依次前移
//	L->last--;						
//	return(1);							//删除成功返回1			
//}
//
///*按值查找*/
//int Location_SeqList(SeqList *L, int x)	//顺序表名，目标值
//{
//	int i = 0;
//	while (i <= L->last && L->data[i] != x)
//		i++;
//	if (i > L->last)return(-1);			//查找失败返回-1
//	else return(i+1);					//查找成功，返回位置
//}
//
//main()
//{
//	SeqList *L;
//	int i,j,k,a;
//	L=Init_SeqList();
//	printf("初始的表为： ");
//	for(i=1;i<=10;i++)
//		{
//			L->data[i - 1] = i;
//			L->last = 10;
//			printf("%d ", L->data[i - 1]);
//		};
//	printf("\n");
//	printf("初始表长为： %d\n", L->last);
//	scanf("%d", &k);
//
////	Insert_SeqList(L, 2, 0);		//插入
//
////	Delete_SeqList(L,2);			//删除
//
///*	printf("\n");
//	printf("改变后的表： ");
//	for (i = 1; i <= L->last; i++)
//	{
//		printf("%d ", L->data[i - 1]);
//	};
//	printf("\n");
//	printf("目前表长为： %d\n", L->last);
//*/
//
///*	a = Location_SeqList(L, k);		//按值查找
//	if (a == -1)printf("\n查表没有数%d", k);
//	else printf("\n数%d在表第%d位置处", k, a);
//*/
//
//	getchar();
//	getchar();
//}