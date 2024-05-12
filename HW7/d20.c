#include <stdio.h>

int recurs_power(int n, int p){
    
    if (p == 0)
		return 1;
	int x = recurs_power(n, p/2);
	
	if (p%2 == 0)
		return x * x;

	else
		return n * x * x;
		
}

int main(){
	int n, p;
	scanf("%d %d", &n, &p);
	printf("%d", recurs_power(n, p));
	return 0;
	}
