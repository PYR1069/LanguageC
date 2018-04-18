#include <stdio.h>  //10진수 입력받아 2진수 출력하기  //나눗셈연산: 몫 "/", 나머지"%"

void BinaryPtr(int mok, int ptr[ ]);  //포인터접근으로 2진수 출력
void BinaryBit(int x);				  //2진수로 출력(비트연산자)
int OddorEven(int x);			   	//짝수와 홀수 체크 함수

int main(void)
{
	int num, i;
	char num2[32];
	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	if (OddorEven(num)) printf("\n%d는 홀수입니다.\n\n", num);
	else printf("\n%d는 짝수입니다.\n\n", num);

	puts("BinaryNum출력결과");
	BinaryBit(num);
	puts("BinaryPtr출력결과");
	BinaryPtr(num, num2);  //num2 는 배열이름(주소값)
	
	return 0;
}

void BinaryPtr(int mok, int ptr[ ])   //int *ptr
{
	int i = 0, cnt = 0;
	puts("포인터로 배열접근:나누셈연산자이용 -> 0부터 \" 몫 \% 2 \" 저장, 마지막 몫 1 = 배열마지막자리 ");
	do {
		ptr[i] = mok % 2;      //**나머지 값을 배열에 저장  //*(ptr+i)
		printf("배열\[%d\] = %d\n", i, mok % 2); 
		mok = mok / 2;          //몫저장
		i++;
		cnt++;                  //2진수로 몇자리인지 체크 = 배열 몇자리까지 넣을지
	} while (mok != 1);         //몫이 1나올때까지 반복
	*(ptr + cnt) = mok;         //**마지막 몫 배열에 저장   //ptr[cnt]
	printf("배열\[%d\] = %d\n", cnt, mok);        //**거꾸로 출력됨

	printf("이제 배열\[%d\]번부터 출력합니다.\n", cnt);
	for (i = cnt; i >= 0; i--)   //뒤부터 출력
	{
		printf("%d", ptr[i]);
	}
	printf("\n\n");
}
void BinaryBit(int x)				//2진수로 출력
{
	int i, cnt = 1, mok = x;
	char arr[32];					//1. 2진수담을 배열선언: int 정수이므로 최대크기 4*8=32bit
	puts("입력받은 정수가 2진수로 몇자리수인지( /2 몇번하는지 +1) 구하고, 비트연산자 이용 -> 배열 뒤부터 저장");

	while (mok != 1)				//2. 입력받은 정수가 2진수로 몇자리수인지 구하자
	{
		mok /= 2;   // mok = mok/2;
		cnt++;
	}
	for (i = 0; i < cnt; i++)		//3. 비트연산자로 1,0 체크해가며 배열(뒤부터)에 넣기
	{
		if (x & (1 << i))
			arr[cnt - 1 - i] = 1;
		else
			arr[cnt - 1 - i] = 0;
	}
	puts("이제 배열\[0\]번부터 출력합니다.");
	for (i = 0; i < cnt; i++)		//4. 출력
	{
		printf("%d", arr[i]);
	}
	printf("\n\n");
}
int OddorEven(int x)   //짝수와 홀수 체크 함수
{
	return ((x & 1) ? 1 : 0);  //홀수: 1반환, 짝수: 0반환 
}