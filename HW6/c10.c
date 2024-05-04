#include <stdio.h>

void print_simple(int a){
	
	int div = 2;
	
	while (a!=1){
		if (a%div==0) {
			printf("%d ", div);
			a/=div;
			}
		else
			div+=1;
		}
	
	}
	

int main()
{
	int a;
	scanf("%d", &a);
	print_simple(a);
	
    return 0;
}
