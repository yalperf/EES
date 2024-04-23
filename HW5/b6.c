
#include <stdio.h>

int main(void)
{
	int a, k;
	scanf("%d", &a);
	int a0 = a%10;
	a /= 10;
	while (a!=0){
		int p = a%10;
		if (p == a0){
			k = 1;
		}
		a /= 10;
		a0 = p;
	}
	
	if (k == 1){
		printf ("YES");
	}
	else printf("NO");
	return 0;
}

