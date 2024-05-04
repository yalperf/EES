#include <stdio.h>


void is_happy_number(int a){
	int a1=a, a2=a;
	int sum=0;
	int multy = 1;
	while (a1!=0){
		sum += a1%10;
		a1 /= 10;
	}
	while (a2!=0){
		multy *= a2%10;
		a2 /= 10;
	}
	if (sum==multy)
		printf("YES");
	else
		printf("NO");
	}

int main(void)
{
	int a;
	scanf("%d", &a);
	is_happy_number(a);
	
	return 0;
}
