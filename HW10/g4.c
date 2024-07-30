
#include <stdio.h>

const int line_width = 256;

int main(int argc, char **argv)
{
	char * input_fn = "input.txt";
	char * output_fn = "output.txt";
	char line[line_width];
	char line_one[line_width];
	char line_two[line_width];
	int res[26] = {0};
	
	char c;
	FILE *fp;
	
	if((fp = fopen(input_fn, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }
    
    int count = 0;
    while(((c = getc(fp)) != EOF) && (c != '\n'))
        line[count++] = c;
    line[count] = '\0'; 
  	
    fclose(fp);
    
    for (int i=0; i<count; i++)
	{
		printf("%c", line[i]);
	}
	printf("\n");

	int one = 0;
	while (line[one]!=' ')
	{
		
		line_one[one] = line[one];
		line[one] = ' ';
		one++;
	}
	printf("%d\n", one);

	int two = 0;
	for (int i = 0; i<count; i++)
	{
		if (line[i]!=' ')
		{
			line_two[two] = line[i];
			two++;
		}
	}
	printf("%d\n", two);
	

	
	for (int i=0; i<one; i++)
	{
		printf("%c", line_one[i]);
		}
	printf("\n");
		
	for (int i=0; i<two; i++)
	{
		printf("%c", line_two[i]);
		}
	printf("\n");

	int k = 0;
	for (int i=0; i<one; i++)
	{
		for (int j=0; j<two; j++)
			{
				if (line_one[i]==line_two[j])
				{
					res[line_one[i]-97]++;
					k++;
				}
			}
		
	}
	
	for (int i=0; i<26; i++)
	{
		if (res[i]==1)
		{
			printf("%c", i+97);
		}
		
	}
	printf("\n");
	
    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    } 	


    for (int i = 0; i<26; i++)
    {
		if (res[i]==1)
		{
			fprintf(fp, "%c ", i+97);
		}
		
	}
		
	fclose(fp);
	return 0;
}

