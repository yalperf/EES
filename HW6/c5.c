#include <stdio.h>
int sum(int a)
{
	int x=0;
	for (int i=1; i<=a; i++)
	{
		x+=i;
	}
	return x;
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", sum(a));
	return 0;
}
