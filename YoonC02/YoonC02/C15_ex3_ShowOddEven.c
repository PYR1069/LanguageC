/*#include <stdio.h>
void FronOddBackEven(int * parr);  //새로운배열선언해서 저장해서 출력

void ShowArrOddEven(int parr1[ ], int x)  //입력받은 x 짝홀수 조사-> 배열 위치지정해서 바로 저장
{
	int i;
	static int front = 0, back = 9;             //입력받은 갯수만큼 함수 호출 >> static으로 현재위치 저장
	if (x & 1)		      //만약 홀수면
	{
		parr1[front] = x;    //앞에서부터 저장
		front++;
	}
	else                 //만약 짝수면
	{
		parr1[back] = x;    //맨뒷값temp에 저장
		back--;
	}
}

int main(void)
{
	int arr[10], arr1[10];
	int i, num;
	
	
	puts("배열 arr에 총 10개의 숫자 입력");
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);   //new값 입력 = 주소&
	}
	printf("arr1 배열요소의 출력 : ");
	FronOddBackEven(arr);
	

	puts("\n배열 arr1에 총 10개의 숫자 입력");
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &num);
		ShowArrOddEven(arr1, num);
	}


	printf("arr2 배열요소의 출력 : ");
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
		if (*(parr + i) & 1)            //만약 홀수면
		{
			pres[f] = *(parr + i);  //앞에서부터 저장
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