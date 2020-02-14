/*tree.h��������������*/
/*���в���������ͬ����Ŀ*/
#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>
//���԰�Item���¶���Ϊ���ʵ�����
typedef struct item
{
	char petname[20];
	char petkind[20];
} Item;
#define MAXITEMS 10
typedef struct node
{
	Item item;
	struct node * left;		//ָ�����֧��ָ��
	struct node * right;	//ָ����֧��ָ�� 
} Node;
typedef struct tree
{
	Node * root;			//ָ��������ָ��
	int size;				//������Ŀ�ĸ��� 
} Tree;
//����ԭ��
//������	��һ������ʼ��Ϊ����
//����ǰ��	ptreeָ��һ����
//������	�����ѱ���ʼ��Ϊ����
void InitializeTree (Tree * ptree);
//������	ȷ�����Ƿ�Ϊ��
//����ǰ��	ptreeָ��һ����
//������	�����Ϊ����������true,���򷵻�false
bool TreeIsEmpty (const Tree * ptree);
//������	ȷ�����Ƿ�����
//����ǰ��	ptreeָ��һ����
//������	�����������������true�����򷵻�false
bool TreeIsFull (const Tree * ptree);
//������	ȷ��������Ŀ�ĸ���
//����ǰ��	ptreeָ��һ����
//������	��������������Ŀ�ĸ���
int TreeItemCount (const Tree * ptree);
//������	���������һ����Ŀ
//����ǰ��	pi�Ǵ���ӵ���Ŀ�ĵ�ַ
//			ptreeָ��һ���Ѿ���ʼ������
//������	������ܣ������Ѹ���Ŀ
//			��ӵ����в�����true;
//			����������false
bool AddItem (const Item * pi, Tree * ptree);
//������	�����в���һ����Ŀ
//����ǰ��	piָ��һ����Ŀ
//			ptreeָ��һ���Ѿ���ʼ������
//������	�������Ŀ�����У���������true��
//			���򷵻�false
bool InTree (const Item * pi, const Tree * ptree);
//������	������ɾ��һ����Ŀ
//����ǰ��	pi�Ǵ�ɾ������Ŀ�ĵ�ַ
//			ptreeָ��һ���Ѿ���ʼ������
//������	������ܣ�����������ɾ������Ŀ
//			������true������������false
bool DeleteItem (const Item * pi, Tree * ptree);
//������	��һ��������������ÿһ����Ŀ
//����ǰ��	ptreeָ��һ����
//			pfunָ��һ��û�з���ֵ�ĺ���
//			�ú�������һ��Item��Ϊ����
//������	pfunָ��ĺ����������� 
//			����ÿ����Ŀһ�� 
void Traverse (const Tree * ptree, void (* pfun)(Item item));
//������	������ɾ�����нڵ�
//����ǰ��	ptreeָ��һ���Ѿ���ʼ������
//������	����Ϊ����
void DeleteAll (Tree * ptree);
#endif 
