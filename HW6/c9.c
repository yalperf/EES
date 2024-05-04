#include <stdio.h>

int factorial(int a){
	if (a==1 || a==0)
		return 1;
	else
		return factorial(a-1)*a;
	
	}
	

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", factorial(a));
	
    return 0;
}
