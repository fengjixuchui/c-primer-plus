#include<stdio.h>
extern int rand0(void);
static unsigned long int next = 1;
int main(void)
{
	int count;
	for(count = 0; count < 5; count++)
		printf("%hd\n", rand0());
	return 0;
}
int rand0(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}
