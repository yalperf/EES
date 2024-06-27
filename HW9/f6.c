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

int is_two_same(int n, int arr[])
{
	int i, j;
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if (arr[i]==arr[j]) 
			{
			return 1;
			}
		}
		
	}
	return 0;
}

int main()
{
enum {BUFFER_SIZE = 101};
int buffer[BUFFER_SIZE];
for (int i=0; i<BUFFER_SIZE; i++)
{
	scanf("%d", &buffer[i]);
}

is_two_same(BUFFER_SIZE, buffer);

return 0;
}
