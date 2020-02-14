//reducto.c�����������ļ�ѹ��Ϊԭ��������֮һ
#include <stdio.h>
#include <stdlib.h>		//Ϊ�˵���exit() 
#include <string.h> 	//Ϊstrcopy()��strcat()�����ṩԭ��
#define LEN 40 
int main(int argc, char *argv[])
{
	FILE *in, *out;		//��������FILEָ��
	int ch;
	char name[LEN];		//���ڴ洢�����ļ���
	int count = 0;
	//��������в���
	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(1);
	} 
	//ʵ������
	if((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
		exit(2);
	} 
	//ʵ�����
	strcpy(name, argv[1]);	//���ļ������Ƶ�������
	strcat(name, ".red");	//�ļ��������.red
	if((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "Can't creat output file.\n");
		exit(3);
	} 
	//��������
	while((ch = getc(in)) != EOF)
		if(count++ % 3 == 0)
			putc(ch, out);	//��ӡÿ3���ַ��е�1��
	//��β����
	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");
	return 0; 
}
