#include<stdio.h>
int main(void)
{
	int num_scan = 0;		//���̶�������� 
	int inum_even = 0;		//ż���ĸ���
	int inum_odd = 0;		//�����ĸ���
	int add_even = 0;		//ż���ĺ�
	int add_odd = 0;		//�����ĺ� 
	float ave_even = 0;		//ż����ƽ����
	float ave_odd = 0;		//������ƽ����
	while(scanf("%d", &num_scan) == 1)
	{
		if(num_scan != 0)
		{
			if(num_scan % 2 == 0)
			{
				inum_even++;
				add_even += num_scan;
				ave_even = (float)add_even /  inum_even;
			}
			else
			{
				inum_odd++;
				add_odd += num_scan;
				ave_odd = (float)add_odd /  inum_odd;
			}
		}
		else
			break;
	}
	printf("num_even: %d; ave_even: %f\n", inum_even, ave_even);
	printf("num_odd: %d; ave_odd: %f\n", inum_odd, ave_odd);
	return 0;
}
