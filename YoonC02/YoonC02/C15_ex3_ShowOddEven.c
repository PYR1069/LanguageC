/*#include <stdio.h>
void FronOddBackEven(int * parr);  //���ο�迭�����ؼ� �����ؼ� ���

void ShowArrOddEven(int parr1[ ], int x)  //�Է¹��� x ¦Ȧ�� ����-> �迭 ��ġ�����ؼ� �ٷ� ����
{
	int i;
	static int front = 0, back = 9;             //�Է¹��� ������ŭ �Լ� ȣ�� >> static���� ������ġ ����
	if (x & 1)		      //���� Ȧ����
	{
		parr1[front] = x;    //�տ������� ����
		front++;
	}
	else                 //���� ¦����
	{
		parr1[back] = x;    //�ǵް�temp�� ����
		back--;
	}
}

int main(void)
{
	int arr[10], arr1[10];
	int i, num;
	
	
	puts("�迭 arr�� �� 10���� ���� �Է�");
	for (i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]);   //new�� �Է� = �ּ�&
	}
	printf("arr1 �迭����� ��� : ");
	FronOddBackEven(arr);
	

	puts("\n�迭 arr1�� �� 10���� ���� �Է�");
	for (i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &num);
		ShowArrOddEven(arr1, num);
	}


	printf("arr2 �迭����� ��� : ");
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", arr1[i]);
	}
	printf("\n");
	return 0;
}

void FronOddBackEven(int * parr)
{
	int pres[10];
	int i, f = 0, b = 9;
	for (i = 0; i < 10; i++)
	{
		if (*(parr + i) & 1)            //���� Ȧ����
		{
			pres[f] = *(parr + i);  //�տ������� ����
			f++;
		}
		else
		{
			pres[b] = *(parr + i);
			b--;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", pres[i]);
	}
	printf("\n");
}
*/