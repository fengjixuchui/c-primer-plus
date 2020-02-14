/*queue.h�������нӿ�*/
#pragma c9x on
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>
//�ڴ˴�����Item�����Ͷ���
//����
typedef struct item
{
	long arrive;
	int processtime;
} Item;
/*��typedef struct item {int gumption: int charisma;} Item */
#define MAXQUEUE 10
typedef struct node
{
	Item item;
	struct node * next;
} Node;
typedef struct queue
{
	Node * front;	//ָ������׵�ָ�� 
	Node * rear;	//ָ�����β��ָ�� 
	int items;		//��������Ŀ�ĸ��� 
} Queue;
//������ 	��ʼ������
//����ǰ��	pqָ��һ������
//������	�ö��б���ʼ��Ϊ�ն���
void InitializeQueue (Queue * pq);
//������	�������Ƿ�����
//����ǰ��	pqָ��һ����ǰ�ѳ�ʼ�����Ķ���
//������	����ö����������򷵻�True,���򷵻�False
bool QueueIsFull (const Queue * pq);
//������	�������Ƿ�Ϊ��
//����ǰ��	pqָ��һ����ǰ�ѳ�ʼ�����Ķ���
//������	����ö���Ϊ�գ��򷵻�True�����򷵻�False
bool QueueIsEmpty (const Queue * pq);
//������	ȷ����������Ŀ�ĸ���
//����ǰ��	pqָ��һ����ǰ�ѳ�ʼ�����Ķ���
//������	���ض�������Ŀ�ĸ���
int QueueItemCount (const Queue * pq);
//������	�����β�������Ŀ
//����ǰ��	pqָ��һ����ǰ�ѳ�ʼ�����Ķ���
//			item��Ҫ��ӵ�����β�˵���Ŀ
//������	�������δ����item����ӵ�
//			����β������������True������
//			���ı���У���������False
bool EnQueue (Item item, Queue * pq);
//������	�Ӷ����׶�ɾ����Ŀ
//����ǰ��	pqָ��һ����ǰ�ѳ�ʼ�����Ķ���
//������	������зǿգ������׶ε���Ŀ
//			�����Ƶ�*pitem�������Ӷ�����ɾ����
//			��������True������������
//			ʹ����Ϊ�գ��Ѷ�������Ϊ�ն���
//			������п�ʼΪ�գ�
//			���ı���У���������False
bool DeQueue (Item *pitem, Queue *pq);
//������	��ն���
//����ǰ��	pqָ��һ����ǰ�ѳ�ʼ�����Ķ���
//������	���б����
void EmptyTheQueue (Queue * pq);
#endif 
