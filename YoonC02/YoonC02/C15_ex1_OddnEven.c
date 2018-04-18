/*#include <stdio.h>    //10개 정수 입력받아서 홀수, 짝수 함수 호출로 각각 출력하기
						//비트연산: A & B,  A |B,   ~A,  A ^ B
						//논리연산: A && B, A || B, !A, //조건연산: ?: 
void ConNum(int *ptr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if ((*(ptr + i) & 1) ? 1 : 0)
			printf("ptr\[%d\] =\t홀\n", i+1);
		else
			printf("ptr\[%d\] =\t짝\n", i+1);
	}
}

void OddNum(int *ptr)
{
	int i;
	printf("홀수 출력: ");
	for (i = 0; i < 10; i++)
	{
		//if (*(ptr + i) % 2 != 0)
		if(*(ptr+i) & 1)				//비트연산 >> 홀수 = 마지막자리가 항상 1
			printf("%d  ", *(ptr + i));
	}
	printf("\n");
}
void EvenNum(int *ptr)
{
	int i;
	printf("짝수 출력: ");
	for (i = 0; i < 10; i++)
	{
		//if (*(ptr + i) % 2 == 0)
		if(!(*(ptr+i) & 1))				//비트연산 >> 짝수 = !(홀수)
			printf("%d  ", *(ptr + i));
	}
	printf("\n");
}

int main(void)
{
	int i;
	int arr[10];
	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력%d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	ConNum(arr, sizeof(arr) / sizeof(int));
	OddNum(arr);
	EvenNum(arr);

	return 0;
}*/