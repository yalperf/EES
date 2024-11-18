#include <stdio.h>

void func(int a)
{
	int b, c, k=1;
	b=a%10;
	c=a/10%10;
	while (a>0)
	{

		if (b<c || b==c)
		{
			k=0;
			break;
		}
		a=a/10;
		b=a%10;
		c=a/10%10;
		}
		
	if (k==1) 
		printf("YES");
	else 
		printf("NO");
}

int main(void)
{
	int a;
	scanf("%d", &a);
	func(a);
	return 0;
}
