
#include <stdio.h>

int main(void)
{
    int a, c, s, b, k = 0;

	scanf("%d", &c);
    a = c % 10;
	if (a==9) k+=1;
    //printf("a=");
    //printf("%d\n", a);
    c = c / 10;
    //printf("c=");
    //printf("%d\n", c);
    s = c;
    //printf("s=");
    //printf("%d\n", s);    
    
    while (s > 0){
        b = s % 10;
        //printf("b=");
        //printf("%d\n", b);
        s = s / 10;
        //printf("s=");
		//printf("%d\n", s);

		if (b==9) {
			k++;
			//else k = 1;
			}
	
		}
	if (k==1)
		printf("YES");
	else
		printf("NO");
    //printf("k=");		
	//printf("%d\n", k);
	return 0;
}
