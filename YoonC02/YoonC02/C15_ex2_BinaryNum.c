#include <stdio.h>  //10���� �Է¹޾� 2���� ����ϱ�  //����������: �� "/", ������"%"

void BinaryPtr(int mok, int ptr[ ]);  //�������������� 2���� ���
void BinaryBit(int x);				  //2������ ���(��Ʈ������)
int OddorEven(int x);			   	//¦���� Ȧ�� üũ �Լ�

int main(void)
{
	int num, i;
	char num2[32];
	printf("10���� ���� �Է�: ");
	scanf("%d", &num);

	if (OddorEven(num)) printf("\n%d�� Ȧ���Դϴ�.\n\n", num);
	else printf("\n%d�� ¦���Դϴ�.\n\n", num);

	puts("BinaryNum��°��");
	BinaryBit(num);
	puts("BinaryPtr��°��");
	BinaryPtr(num, num2);  //num2 �� �迭�̸�(�ּҰ�)
	
	return 0;
}

void BinaryPtr(int mok, int ptr[ ])   //int *ptr
{
	int i = 0, cnt = 0;
	puts("�����ͷ� �迭����:�������������̿� -> 0���� \" �� \% 2 \" ����, ������ �� 1 = �迭�������ڸ� ");
	do {
		ptr[i] = mok % 2;      //**������ ���� �迭�� ����  //*(ptr+i)
		printf("�迭\[%d\] = %d\n", i, mok % 2); 
		mok = mok / 2;          //������
		i++;
		cnt++;                  //2������ ���ڸ����� üũ = �迭 ���ڸ����� ������
	} while (mok != 1);         //���� 1���ö����� �ݺ�
	*(ptr + cnt) = mok;         //**������ �� �迭�� ����   //ptr[cnt]
	printf("�迭\[%d\] = %d\n", cnt, mok);        //**�Ųٷ� ��µ�

	printf("���� �迭\[%d\]������ ����մϴ�.\n", cnt);
	for (i = cnt; i >= 0; i--)   //�ں��� ���
	{
		printf("%d", ptr[i]);
	}
	printf("\n\n");
}
void BinaryBit(int x)				//2������ ���
{
	int i, cnt = 1, mok = x;
	char arr[32];					//1. 2�������� �迭����: int �����̹Ƿ� �ִ�ũ�� 4*8=32bit
	puts("�Է¹��� ������ 2������ ���ڸ�������( /2 ����ϴ��� +1) ���ϰ�, ��Ʈ������ �̿� -> �迭 �ں��� ����");

	while (mok != 1)				//2. �Է¹��� ������ 2������ ���ڸ������� ������
	{
		mok /= 2;   // mok = mok/2;
		cnt++;
	}
	for (i = 0; i < cnt; i++)		//3. ��Ʈ�����ڷ� 1,0 üũ�ذ��� �迭(�ں���)�� �ֱ�
	{
		if (x & (1 << i))
			arr[cnt - 1 - i] = 1;
		else
			arr[cnt - 1 - i] = 0;
	}
	puts("���� �迭\[0\]������ ����մϴ�.");
	for (i = 0; i < cnt; i++)		//4. ���
	{
		printf("%d", arr[i]);
	}
	printf("\n\n");
}
int OddorEven(int x)   //¦���� Ȧ�� üũ �Լ�
{
	return ((x & 1) ? 1 : 0);  //Ȧ��: 1��ȯ, ¦��: 0��ȯ 
}