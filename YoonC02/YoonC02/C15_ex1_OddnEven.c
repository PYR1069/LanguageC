/*#include <stdio.h>    //10�� ���� �Է¹޾Ƽ� Ȧ��, ¦�� �Լ� ȣ��� ���� ����ϱ�
						//��Ʈ����: A & B,  A |B,   ~A,  A ^ B
						//������: A && B, A || B, !A, //���ǿ���: ?: 
void ConNum(int *ptr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if ((*(ptr + i) & 1) ? 1 : 0)
			printf("ptr\[%d\] =\tȦ\n", i+1);
		else
			printf("ptr\[%d\] =\t¦\n", i+1);
	}
}

void OddNum(int *ptr)
{
	int i;
	printf("Ȧ�� ���: ");
	for (i = 0; i < 10; i++)
	{
		//if (*(ptr + i) % 2 != 0)
		if(*(ptr+i) & 1)				//��Ʈ���� >> Ȧ�� = �������ڸ��� �׻� 1
			printf("%d  ", *(ptr + i));
	}
	printf("\n");
}
void EvenNum(int *ptr)
{
	int i;
	printf("¦�� ���: ");
	for (i = 0; i < 10; i++)
	{
		//if (*(ptr + i) % 2 == 0)
		if(!(*(ptr+i) & 1))				//��Ʈ���� >> ¦�� = !(Ȧ��)
			printf("%d  ", *(ptr + i));
	}
	printf("\n");
}

int main(void)
{
	int i;
	int arr[10];
	printf("�� 10���� ���� �Է�\n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է�%d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	ConNum(arr, sizeof(arr) / sizeof(int));
	OddNum(arr);
	EvenNum(arr);

	return 0;
}*/