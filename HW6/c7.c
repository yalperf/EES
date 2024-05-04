#include <stdio.h>

int notation(int n, int p)
{
	int remainder;
	int exponent = 1;
	int res = 0;
		for(;n > 0;n /= p)
		{
			remainder = n % p;
			//printf("remainder= %d\n", remainder);
			res += remainder * exponent;
			//printf("res= %d\n", res);
			exponent *= 10;
			//printf("esponent= %d\n", exponent);
			//printf("n=%d p=%d\n", n, p);
		}

		return res;
}

int main()
{
	int n, p;
	scanf("%d %d", &n, &p);
	printf("%d", notation(n, p));
    return 0;
}
