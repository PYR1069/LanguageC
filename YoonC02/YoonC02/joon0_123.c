/*#include <stdio.h>  //4�� 1,2,3 ���� ��������ǥ�� A(N) = A(N-1)+A(N-2)+A(N-3)

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
	puts("����ؿ�? ");
	scanf("%d", &n);
	printf("%d�� �Է½���\n", n);
	for (i = 0; i < n; i++)
	{
		printf("%d��: ", i+1);
		scanf("%d", &num);
		printf("1,2,3�� ������ ��Ÿ���� ����� ��: ");
		OneTwoTree(&num);
	}
	return 0;
}
*/