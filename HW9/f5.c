#include <stdio.h>

int find_max_array(int size, int arr[])
{
	int max = arr[0];
	for (int i=0; i<size; i++)
	{
		if (arr[i]>max)
			max=arr[i];
    }
	return max;
}

int main()
{
enum {BUFFER_SIZE = 5};
int buffer[BUFFER_SIZE];
for (int i=0; i<BUFFER_SIZE; i++)
{
	scanf("%d", &buffer[i]);
}

int max = find_max_array(BUFFER_SIZE, buffer);
printf("max =%d\n",max);

return 0;
}
