#include<stdio.h>
int main(void)
{
	double debt;
	for(debt = 100.0; debt < 150.0; debt = 1.1 * debt)
		printf("Your debt is now $%.2f.\n", debt);
	return 0;
}