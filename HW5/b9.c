
#include <stdio.h>

int main(void)
{
    int a, b, k=1;
    scanf("%d", &a);
	b=a%10;
	while (a>0){

		if (b%2!=0){
			k=0;
			break;
		}
		a=a/10;
		b=a%10;
		}
		
	if (k==1) 
		printf("YES");
	else 
		printf("NO");
	return 0;
}
