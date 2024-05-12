#include <stdio.h>

void is2pow(int a){
    
	if (a == 1)
		printf("YES");
	else if (a == 0 || a%2 == 1)
		printf("NO");
	else
		is2pow(a/2);
		
}

int main(){
	int a;
	scanf("%d", &a);
	is2pow(a);
	return 0;
	}
