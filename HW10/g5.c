
#include <stdio.h>

const int line_width = 256;

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
    
	for (int i=0; i<count; i++)
	{
		switch (line[i]) {
			case 'a': 
				line[i]='b';
				break;
			case 'b':
				line[i]='a';
				break;
			case 'A':
				line[i]='B';
				break;
			case 'B':
				line[i]='A';
				break;
		}
	}

		
    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    } 	

	fprintf(fp, "%s", line);

    fclose(fp); 	

	return 0;
}

