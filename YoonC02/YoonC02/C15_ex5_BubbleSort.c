/*#include <stdio.h>   //***�˰���_��������

void AscOrder(int * aptr, int alen)//��������(ascending order) 1,2,3,4,5
{
	int i, j;
	int temp = 0;

	for (j = 0; j < alen - 1; j++)			  //5�� �ݺ�(0~4) >> 4���ݺ� >> 3���ݺ�>> 2��>> 1��..
	{
		for (i = 0; i < (alen -j) - 1; i++)   //����ū�� ���ڸ��� ������ for�� //**�˻��ұ��� = �������� - j -1
		{
			if (aptr[i] > aptr[i + 1])
			{
				temp = aptr[i];
				aptr[i] = aptr[i + 1];		//�������� ������ <<<< Swap
				aptr[i + 1] = temp;			
			}
		}
	}
}
void DesOrder(int * dptr, int dlen) //��������(descending order) 5,4,3,2,1
{
	int i, j;
	int temp = 0;

	for (j = 0; j < dlen - 1; j++)			  //5�� �ݺ�(0~4) >> 4���ݺ� >> 3���ݺ�>> 2��>> 1��..
	{
		for (i = 0; i < (dlen - j) - 1; i++)   //����ū�� ���ڸ��� ������ for�� //**�˻��ұ��� = �������� - j -1
		{
			if (dptr[i] < dptr[i + 1])
			{
				temp = dptr[i + 1];
				dptr[i + 1] = dptr[i];		//�������� �ڷ�~ >>>> Swap
				dptr[i] = temp;
			}
		}
	}
}

int main(void)
{
	int i, cho = 0;
	int ary[5];
	puts("5�� ������ �Է��ϼ���");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ary[i]);
	}

	printf("\n���ļ��� \(1\)��������, \(2\)��������: ");
	scanf("%d", &cho);
	if (cho == 1) AscOrder(ary, sizeof(ary)/sizeof(int));
	else if (cho == 2) DesOrder(ary, sizeof(ary)/sizeof(int));
	else puts("�׷��� �����. ���� �ȹٲ�ϴ�.");

	for (i = 0; i < 5; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");

	return 0;
}
*/