/*#include <stdio.h>  //4를 1,2,3 합의 조합으로표현 A(N) = A(N-1)+A(N-2)+A(N-3)

void OneTwoTree(int * ptr)
{
	int i;
	int ary[100] = {0,1,2,4};

	for (i = 4; i < 100; i++)
	{
		ary[i] = ary[i - 3] + ary[i - 2] + ary[i - 1];
	}

	printf("%d\n", ary[*ptr]);
}

int main(void)
{
	int num, n, i;
	puts("몇개원해요? ");
	scanf("%d", &n);
	printf("%d개 입력시작\n", n);
	for (i = 0; i < n; i++)
	{
		printf("%d번: ", i+1);
		scanf("%d", &num);
		printf("1,2,3의 합으로 나타내는 방법의 수: ");
		OneTwoTree(&num);
	}
	return 0;
}
*/