
#include <stdio.h>
#include <string.h>

const int line_width = 1000;

int main(int argc, char **argv)
{
	char * input_fn = "input.txt";
	char * output_fn = "output.txt";
	char line[line_width];
	char line_res[line_width];
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
    
    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    } 	
	int j = 0;
	for (int i=0; i<count; i++)
	{
			if (strchr(line_res,line[i]) == NULL && line[i]!=' ')
			{
				line_res[j]=line[i];
				j+=1;
			}
	}
	line_res[j] = '\0';
	fprintf(fp, "%s", line_res);

	fclose(fp);
	return 0;
}

