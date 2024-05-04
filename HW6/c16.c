#include <stdio.h>


void func(int a){
	int res = 0;
	for (int i=2; i<a; i++){
		if (a%i==0) {
			res = 1;
			}
		}
		
	if (a==1 || res==1 || a==0) printf("NO");
	else printf("YES");
	
	}

int main(void)
{
	int a;
	scanf("%d", &a);
	func(a);
	
	return 0;
}
