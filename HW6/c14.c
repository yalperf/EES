#include <stdio.h> 

void sum(int a){
    int sum = 0;
    
    while (a > 0) 
    { 
        sum += a % 10; 
        a /= 10;
    }
    
    if (sum%2==0)
		printf("YES");
	else
		printf("NO");
	}

int main() 
{ 
    int a; 
    scanf("%d", &a);


    sum(a); 
    return 0; 
}
