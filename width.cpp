#include<stdio.h>
#define PAGES 931
int main(void)
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);		//�����ֿ�ȴ���ָ����ȣ��ֶ��Զ���չ����Ӧ���ֵĳ��� 
	printf("*%10d*\n", PAGES);		//Ĭ���Ҷ��� 
	printf("*%-10d*\n", PAGES);		//ǿ������� 
	return 0;
}
