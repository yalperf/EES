#include <stdio.h>

int main(void)
{
    int a, b, c, k=1;
    scanf("%d", &a);
	b=a%10;
	c=a/10%10;
	while (a>0){

		if (b<c || b==c){
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
	return 0;
}
