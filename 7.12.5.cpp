#include<stdio.h>
int main(void)
{
	int num = 0;		//��ǰ�������� 
	int i = 0;			//���� 
	int inum_even = 0;	//ż������ 
	int add_even = 0;	//ż���ĺ� 
	int ave_even = 0;	//ż����ƽ���� 
	int inum_odd = 0;	//�����ĸ���
	int add_odd = 0;	//�����ĺ�
	int ave_odd = 0;	//������ƽ���� 
	printf("Please input number(0 to quit): ");
	while(scanf("%d", &num) == 1 && num != 0)
	{
		//if(num != 0)
		//{
			i = num % 2;
			switch(i)
			{
				case 0:
				{
					++inum_even;
					add_even += num; 
					ave_even = add_even / inum_even; 
					break;
				}
				default:
				{
					++inum_odd;
					add_odd += num; 
					ave_odd = add_odd / inum_odd; 
					break;	
				}
			} 
		//} 
	}
	printf("num_even: %d, ave_even: %d\n", inum_even, ave_even);
	printf("num_odd: %d, ave_odd: %d\n", inum_odd, ave_odd);
	return 0;
} 
