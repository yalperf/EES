
#include <stdio.h>

int main(void)
{
	int a, max;
	scanf("%d", &a);
	
	if ((a/100)>=((a%100)/10) && (a/100)>=((a%100)%10)) max = (a/100);
	else if (((a%100)/10)>=(a/100) && ((a%100)/10)>=((a%100)%10)) max = ((a%100)/10);
	else if (((a%100)%10)>=(a/100) && ((a%100)/10)<=((a%100)%10)) max = ((a%100)%10);
	printf("%d", max);
	return 0;
}

