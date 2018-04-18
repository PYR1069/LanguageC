/*#include <stdio.h>   //***알고리즘_버블정렬

void AscOrder(int * aptr, int alen)//오름차순(ascending order) 1,2,3,4,5
{
	int i, j;
	int temp = 0;

	for (j = 0; j < alen - 1; j++)			  //5번 반복(0~4) >> 4번반복 >> 3번반복>> 2번>> 1번..
	{
		for (i = 0; i < (alen -j) - 1; i++)   //가장큰수 끝자리로 보내기 for문 //**검사할길이 = 원래길이 - j -1
		{
			if (aptr[i] > aptr[i + 1])
			{
				temp = aptr[i];
				aptr[i] = aptr[i + 1];		//작은수를 앞으로 <<<< Swap
				aptr[i + 1] = temp;			
			}
		}
	}
}
void DesOrder(int * dptr, int dlen) //내림차순(descending order) 5,4,3,2,1
{
	int i, j;
	int temp = 0;

	for (j = 0; j < dlen - 1; j++)			  //5번 반복(0~4) >> 4번반복 >> 3번반복>> 2번>> 1번..
	{
		for (i = 0; i < (dlen - j) - 1; i++)   //가장큰수 끝자리로 보내기 for문 //**검사할길이 = 원래길이 - j -1
		{
			if (dptr[i] < dptr[i + 1])
			{
				temp = dptr[i + 1];
				dptr[i + 1] = dptr[i];		//작은수를 뒤로~ >>>> Swap
				dptr[i] = temp;
			}
		}
	}
}

int main(void)
{
	int i, cho = 0;
	int ary[5];
	puts("5개 정수를 입력하세용");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ary[i]);
	}

	printf("\n정렬선택 \(1\)오름차순, \(2\)내림차순: ");
	scanf("%d", &cho);
	if (cho == 1) AscOrder(ary, sizeof(ary)/sizeof(int));
	else if (cho == 2) DesOrder(ary, sizeof(ary)/sizeof(int));
	else puts("그런건 없어요. 정렬 안바뀝니다.");

	for (i = 0; i < 5; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");

	return 0;
}
*/