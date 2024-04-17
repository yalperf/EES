
#include <stdio.h>

int main(void)
{
	int min = 0;
	int a[5];
	for (int i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	for (int i=0; i<5; i++){
		if (a[i] < a[min]) min = i;
	}	

	printf("%d", a[min]);
	return 0;
}

