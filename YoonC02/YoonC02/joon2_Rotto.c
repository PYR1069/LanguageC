/*#include <stdio.h>  //독일로또 {1,2,~~ 49} 중 숫자 6개; 전략:49개 숫자 중 k(k>6)개 골라 집합S만들어 경우의수
					//첫번째숫자 k(6<k<13), k개 숫자는 집합S원소. S원소는 오름차순// 입력마지막은 0

void AscOrder(int * aptr, int alen);//오름차순함수

int main(void)
{
	int i, num;
	int ary[6]; //로또 = 6개숫자
	int arr[13] = { 0 };  //k(6<k<13)

	puts("k입력( 6 < k < 13 )");//**몇개의 원소?
	scanf("%d", &num);									   

	printf("\n%d개 숫자를 골라주세용( 1 < x < 49 )\n", num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//AscOrder(ary, sizeof(ary) / sizeof(int));  //6개숫자 오름차순정렬 호출

	return 0;
}


void AscOrder(int * aptr, int alen)//오름차순함수(ascending order) 1,2,3,4,5
{
	int i, j;
	int temp = 0;

	for (j = 0; j < alen - 1; j++)			  //5번 반복(0~4) >> 4번반복 >> 3번반복>> 2번>> 1번..
	{
		for (i = 0; i < (alen - j) - 1; i++)   //가장큰수 끝자리로 보내기 for문 //**검사할길이 = 원래길이 - j -1
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
*/