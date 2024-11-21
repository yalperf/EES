#include <stdio.h>

void print_num(int a)
{
	if (a>0)
	{
		printf("%d ", a%10);
		print_num(a/10);
	}
}

int main()
{
	int a;
	scanf("%d", &a);
	if (a==0) 
		printf("%d", 0);
	else 
		print_num(a);
	return 0;
}
