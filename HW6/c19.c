#include <stdio.h>


int digit_to_num(){
	char c;
    int sum=0;
    while( (c=getchar())!='\n')
        if(c>='0' && c<='9') 
            sum+=c-'0';
    return sum;
	}

int main(void)
{
    
    printf("%d", digit_to_num());
    return 0;
}
