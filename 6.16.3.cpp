#include<stdio.h>
int main(void)
{
	const int X = 6;		//ͨ���޸Ĵ˴�ʵ�ֲ�ͬ�Ĺ��� 
	char Alphabet[X];
	int i, j, k;
	/*�����������ĸ��ABCDEF*/
	for (i = 0; i < X; i++)
	{
		Alphabet[i] = 'A' + X - 1 - i;
		//printf("%c", Alphabet[i]);
	}
	for(j = X - 1; j >= 0; j--)
	{
		for(k = j; k >= j and k <= X - 1; k++)
		printf("%c", Alphabet[k-j]);
	printf("\n");
	}
	return 0;
} 
