
#include <stdio.h>

int main(void)
{
    int a, b, num;
    scanf("%d", &a);
    
    num=a%10;
	b=num;
	a/=10;
	while (a>0){
		num=a%10;
		a/=10;
		b*=10;
		b=b+num;
		}
	printf("%d", b);
		
	return 0;
}
