#include<stdio.h>
int main(void)
{
	char letter;
	int i, j, k, m, n, x;	
	char Alphabet[i];		//��ĸ���� 
	printf("Please enter an English letter: ");
	scanf("%c", &letter);
	i = letter - 'A' + 1;	//�����A��������ĸ֮��һ�����ٸ���ĸ
	//printf("%d", i);
	for(j = 0; j < i; j++)	//��A���������ĸ֮�����е���ĸ��������Alphabet�� 
	{
		Alphabet[j] = 'A' + j;
		//printf("%c", Alphabet[j]);
	} 
	for(k = i - 1; k >= 0; k--)	//��ӡ�ո� 
	{
		for(m = 0; m < k; m++)
		 	printf(" ");
		 	for(n = 0; n >= 0 and n <= i - m - 1; n++)	//�������������� 
		 		printf("%c", Alphabet[0 + n]); 
		 		for(x = i - m - 2; x >= 0 and x<= i - m - 2; x--)	//�����Ұ�������� 
					printf("%c", Alphabet[0 + x]); 
		printf("\n");
	}
	return 0;
}
