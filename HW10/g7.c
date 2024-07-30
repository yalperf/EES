
#include <stdio.h>

const int line_width = 10000;

int main(int argc, char **argv)
{
	char * input_fn = "input.txt";
	char * output_fn = "output.txt";
	char line[line_width];
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
    

    int a = 0;
    int b = 0;
    
    printf ("%d", count);
		
	for (int i=0; i<=count; i++)
	{
		if (line[i] >= 'a' && line[i] <= 'z')
		{
				a+=1;
		}
		else if (line[i] >= 'A' && line[i] <= 'Z')
		{
			b+=1;
		}
	}

		
    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    } 	

	fprintf(fp, "%d %d", a, b);

    fclose(fp); 	

	return 0;
}

