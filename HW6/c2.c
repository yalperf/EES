#include <stdio.h>
int quadric(int a, int b)
{
    int x = 1;
    for (int i = 1; i<=b; i++){
		x=x*a;
		}
	return x;
}
int main()
{
    int a, b;
    scanf("%d %d",&a, &b);
    printf("%d", quadric(a, b));
    return 0;
}
