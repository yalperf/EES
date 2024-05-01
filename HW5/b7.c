
#include <stdio.h>

int main(void)
{
    int a, b, c, s;

	scanf("%d", &c);
    do {
        a = c % 10;
        printf("a=");
        printf("%d\n", a);
        c = c / 10;
        printf("c=");
        printf("%d\n", c);
        s = c;
        printf("s=");
        printf("%d\n", s);
        while (s > 0) {
            b = s % 10;
            printf("b=");
            printf("%d\n", b);
            s = s / 10;
            printf("s=");
            printf("%d\n", s);
            if (a == b) {
                printf("YES");
                a = 77;
                break;
            }
        }
        if (a == 77)
            break;
    } 
    while (c != 0);
    if (a != 77)
        printf("NO");

    //system("pause");
	return 0;
}

