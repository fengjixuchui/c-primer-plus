#include<stdio.h>
#include<inttypes.h>		//֧�ֿ���ֲ����
int main(void)
{
	int16_t me16;			//me16��һ��16λ�з��ű���
	me16 = 4593;
	printf("First, assume int16_t is short: ");
	printf("me16 = %hd\n", me16);	//%16��ʾ��ʮ������ʾshort������
	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me16 = %" "hd" "\n", me16);
	//printf("me16 = %hd\n", me16);
	return 0; 
 } 
