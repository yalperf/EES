#include <stdio.h>

int Input(int arr[], int n)
{
int i,num;
	while(scanf("%d",&num)==1)
		arr[i++] = num;
	return i;
}

int isDigit(char c)
{
	return ((c>='0')&&(c<='9'));
}

int InputGet(int arr[], int n)
{
int i;
char c;
	while((c=getchar())!='\n')
	{
		if(isDigit(c))
		{
			int number=0;
			do
			{
				number=number*10+c-'0';
				c=getchar();
			}
			while(isDigit(c));
			arr[i++] = number;
			if(c=='\n')
				break;
		}
	}
	return i;
}

void sort_even_odd(int n, int arr[])
{
int temp = 0;
	for(int i = 0; i < n-1; ++i)
	{
		for(int j = 0; j < n-1; ++j)
		{
			if (arr[j+1]%2==0 && arr[j]%2!=0)
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


void Print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ",arr[i]);
	printf("\n");
}
int main()
{
enum {BUFFER_SIZE = 20};
int buffer[BUFFER_SIZE];
int size = InputGet(buffer,BUFFER_SIZE);
printf("size =%d\n",size);
sort_even_odd(size, buffer);
Print(buffer,size);
return 0;
}
