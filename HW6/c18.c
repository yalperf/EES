#include <stdio.h>


int is_digit(){
	char c;
    int sum=0;
    while( (c=getchar())!='\n')
        if(c>='0' && c<='9') 
            sum++;
    return sum;
	}

int main(void)
{
    
    printf("%d", is_digit());
    return 0;
}
