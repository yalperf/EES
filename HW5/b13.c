
#include <stdio.h>

int main(void)
{
    int a, b, num, q1=0, q2=0;
    scanf("%d", &a);
    
    num=a%10;
	b=num;

	while (a>0){

		if (b%2==0) q1++;
		else q2++;

		a/=10;
		num=a%10;
		b=num;
		}
	printf("%d %d", q1, q2);
		
	return 0;
}
