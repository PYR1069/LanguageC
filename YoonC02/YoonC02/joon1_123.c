/*#include <stdio.h>  //4를 1,2,3 합의 조합으로표현 A(N) = A(N-1)+A(N-2)+A(N-3)

void OneTwoTree(int * ptr, int num)
{
	int i;
	int ary[11] = { 0,1,2,4 };

	for (i = 4; i < 11; i++)
	{
		ary[i] = ary[i - 3] + ary[i - 2] + ary[i - 1];
	}

	for (i = 0; i < num; i++)
	{
		printf("%d\n", ary[ptr[i]]);
	}
	printf("\n");
}

int main(void)
{
	int n, i;
	int arr[11];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	OneTwoTree(arr, n);
	
	return 0;
}
*/