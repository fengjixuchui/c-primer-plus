//two_func.c������һ���ļ���ʹ���������� 
#include<stdio.h>
void butler (void);		//���������� 
int main(void)
{
	printf("I will summon the bulter function.\n");
	butler();			//�����ĵ��� 
	printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
	return 0;
 } 

void butler(void)		//�����Ķ��� 
{
	printf("You rang, sir?\n");
}
