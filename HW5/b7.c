
#include <stdio.h>

int main(void)
{
    int a, b, c, s;

	scanf("%d", &c);
    do {
        a = c % 10;

        c = c / 10;

        s = c;

        while (s > 0) {
            b = s % 10;
			s = s / 10;
            if (a == b) {
                printf("YES");
                a = 77;
                break;
            }
        }
        if (a == 77)
            break;
    } while (c != 0);
    if (a != 77)
        printf("NO");

    //system("pause");
	return 0;
}

