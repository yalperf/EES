#include <stdio.h>

char upper(char a){
	
	return ((a>='a')&&(a<='z')) ? (a-32) : a;
	
	}
	

int main()
{
	char word;
	
	while (word!='.'){
		scanf("%c", &word);
		if (word=='.')
			break;
		printf ("%c", upper(word));		
		}
	
	
    return 0;
}
