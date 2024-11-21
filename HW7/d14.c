#include <stdio.h>

void print_num()
{
	int a;
	scanf("%d", &a);
	
	if (a==0)
		return;
	
	else if (a%2==1 || a%2==-1)
	{
		printf("%d ", a);
		print_num();
	}
	else
		print_num();
}

int main()
{
	print_num();
	return 0;
}
