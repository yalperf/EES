
#include <stdio.h>

int main(void)
{
	int max = 0;
	int a[5];
	for (int i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	for (int i=0; i<5; i++){
		if (a[max] < a[i]) max = i;
	}	

	printf("%d", a[max]);
	return 0;
}

