/*#include <stdio.h>  //���Ϸζ� {1,2,~~ 49} �� ���� 6��; ����:49�� ���� �� k(k>6)�� ��� ����S����� ����Ǽ�
					//ù��°���� k(6<k<13), k�� ���ڴ� ����S����. S���Ҵ� ��������// �Է¸������� 0

void AscOrder(int * aptr, int alen);//���������Լ�

int main(void)
{
	int i, num;
	int ary[6]; //�ζ� = 6������
	int arr[13] = { 0 };  //k(6<k<13)

	puts("k�Է�( 6 < k < 13 )");//**��� ����?
	scanf("%d", &num);									   

	printf("\n%d�� ���ڸ� ����ּ���( 1 < x < 49 )\n", num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//AscOrder(ary, sizeof(ary) / sizeof(int));  //6������ ������������ ȣ��

	return 0;
}


void AscOrder(int * aptr, int alen)//���������Լ�(ascending order) 1,2,3,4,5
{
	int i, j;
	int temp = 0;

	for (j = 0; j < alen - 1; j++)			  //5�� �ݺ�(0~4) >> 4���ݺ� >> 3���ݺ�>> 2��>> 1��..
	{
		for (i = 0; i < (alen - j) - 1; i++)   //����ū�� ���ڸ��� ������ for�� //**�˻��ұ��� = �������� - j -1
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
*/