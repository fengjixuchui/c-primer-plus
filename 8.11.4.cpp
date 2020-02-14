#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void)
{
	int c;					//�����ַ���ASCII 
	char cr;				//�����ַ� 
	long n_chars = 0L;		//�ַ��� 
	int n_words = 0; 		//������
	float average = 0;		//ÿ�������е�ƽ����ĸ�� 
	bool inword = false;	//���c��һ�������У���inword����true
	printf("Enter text to be analyzed (Ctrl+Z to terminate): \n");
	while((c = getchar()) != EOF) 
	{
		cr = (char)c;
		if(cr != ' ' && cr != '\n' && !ispunct(cr))
			n_chars++;
		if(!isspace(cr) && !inword)
		{
			inword = true;	//��ʼһ���µ���
			n_words++;		//ͳ�Ƶ��� 
		}
		if(isspace(cr) && inword)
			inword = false;	//���ﵥ�ʵ�β�� 
	}
	average = (float)n_chars / n_words; 
	printf("characters = %ld, words = %ld, average = %.3f", n_chars, n_words, average);
	return 0; 
}
