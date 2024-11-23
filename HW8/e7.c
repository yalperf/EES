#include <stdio.h>
#define SIZE 10


int Input(int n,int arr[])
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	return i;
}


void Func(int len,int arr[])
{
	int num = len/2;
	for (int i = 0; i < num-1; i++)
    {
		int temp = arr[i];
		arr[i] = arr[num - 1];
		arr[num - 1] = temp;
		num -= 1;
		
    }

	for (int i = len/2; i < len; i++)
	{
		int temp = arr[i];
		arr[i] = arr[len-1];
		len -= 1;
		arr[len] = temp;
	}
}

void Print(int len, int *arr)
{
	Func(SIZE,arr);
	int i;
	for (i = 0; i < len; i++)
		printf("%d ",arr[i]);
		printf("\n");
}

int main()
{
	int arr[SIZE]={0};
	Input(SIZE,arr);

    //Func(SIZE,arr);
	Print(SIZE,arr);

	return 0;
}
