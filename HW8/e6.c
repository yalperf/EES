#include <stdio.h>
#define SIZE 12

int Input(int n,int arr[])
{
	int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    return i;
}


void Func(int len,int arr[])
{
    float num = 0;
    for (int i = 0; i < len; i++)
    {
		num += arr[i];
    }
    num /= len;
    printf("%.2f", num);
}

int main()
{
    int arr[SIZE]={0};
    Input(SIZE,arr);

    Func(SIZE,arr);
    
    return 0;
}
