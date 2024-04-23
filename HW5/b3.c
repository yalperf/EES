
#include <stdio.h>

int main(void)
{
	int a, b, t=0;
	scanf("%d%d", &a, &b);
	for (int i=a; i<=b; ++i){
		t += i*i;
	}
	printf("%d", t);

	return 0;
}

