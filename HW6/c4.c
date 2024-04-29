#include <stdio.h>

int func(int a){
	int x = 0;
	if (a>=-2 && a<2){
		x=a*a;
		}
	else if (a>=2) {
		x=a*a+4*a+5;
		}
	else if (a<-2){
		x=4;
		}
	return x;
	}
int maxim (void){
	int a = 1, g;
	int n = 0;
	while (a!=0){
		scanf("%d", &a);
		g = func(a);
		if (g>n){
			n=g;
		}
	}
	return n;

	}

int main()
{
	int b = maxim();
	printf("%d", b);
    return 0;
}
