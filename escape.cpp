#include<stdio.h>
int main(void)
{
	float salary;
	printf("\aEnter your desired monthly salary: ");	//\aʹ���Է��������� 
	printf("$_______\b\b\b\b\b\b\b");					//\bΪ�˸�� 
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");									//\rΪ�س��� 
	return 0;
}
