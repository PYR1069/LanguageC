/*#include <stdio.h> 

//**순열:중복가능*** nPr= n!/(n-r)!  
//**조합:중복불가*** nCr= nPr/r!
int Factorial(int Fnum);            //팩토리얼함수 : num개를 일렬로 줄세워 나올수 있는 경우의 수
int PermutationNum(int Pnum, int r);//순열값 함수: num개 중 r개 뽑아 한줄세우기: 중복가능
int CombinationNum(int Cnum, int r);//조합값 함수: num개 중 r개 뽑아 한줄세우기: 중복불가

int main(void)
{
	int num, r;
	
	printf("몇개의 원소중에?: ");
	scanf("%d", &num);
	printf("몇개 뽑아서 한줄세울꺼?: ");
	scanf("%d", &r);

	printf("중복가능 순열의 값: %d\n",PermutationNum(num, r));   
	printf("중복불가 조합의 값: %d\n", CombinationNum(num, r));

	return 0;
}


int CombinationNum(int Cnum, int r)//** nCr= nPr/r! (조합:중복불가): n개 중 r개 뽑아 한줄세우기: 중복불가
{
	return PermutationNum(Cnum, r) / Factorial(r);
}

int PermutationNum(int Pnum, int r)//** nPr= n!/(n-r)! (순열:중복가능): n개 원소중 r개뽑아 나열할 수 있는 경우의수
{
	if (r == 1) return Pnum;
	else return Pnum * PermutationNum(Pnum - 1, r - 1);
	//else return Factorial(Pnum) / Factorial(Pnum - r);
}

int Factorial(int Fnum) //팩토리얼 경우의 수: n! = n*(n-1)*(n-2)*...*(1)
{
	if (Fnum == 1) return 1;
	else return Fnum * Factorial(Fnum - 1);
}*/