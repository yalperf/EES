
#include <stdio.h>

int main(void)
{
    int a, k=-1;
    
    do {
		scanf("%d", &a);
		k++;
		}
	while (a!=0);
	
	printf("%d", k);
		
	return 0;
}
