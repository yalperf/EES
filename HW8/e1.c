#include <stdio.h>

int main()
{
	int a[5];
	
	for (int i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	double mid;
	for (int i=0; i<5; i++)
	{
		mid+=a[i];
	}
	
	printf("%.3f", mid/=5);
}
