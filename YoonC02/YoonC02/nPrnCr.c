/*#include <stdio.h> 

//**����:�ߺ�����*** nPr= n!/(n-r)!  
//**����:�ߺ��Ұ�*** nCr= nPr/r!
int Factorial(int Fnum);            //���丮���Լ� : num���� �Ϸķ� �ټ��� ���ü� �ִ� ����� ��
int PermutationNum(int Pnum, int r);//������ �Լ�: num�� �� r�� �̾� ���ټ����: �ߺ�����
int CombinationNum(int Cnum, int r);//���հ� �Լ�: num�� �� r�� �̾� ���ټ����: �ߺ��Ұ�

int main(void)
{
	int num, r;
	
	printf("��� �����߿�?: ");
	scanf("%d", &num);
	printf("� �̾Ƽ� ���ټ��ﲨ?: ");
	scanf("%d", &r);

	printf("�ߺ����� ������ ��: %d\n",PermutationNum(num, r));   
	printf("�ߺ��Ұ� ������ ��: %d\n", CombinationNum(num, r));

	return 0;
}


int CombinationNum(int Cnum, int r)//** nCr= nPr/r! (����:�ߺ��Ұ�): n�� �� r�� �̾� ���ټ����: �ߺ��Ұ�
{
	return PermutationNum(Cnum, r) / Factorial(r);
}

int PermutationNum(int Pnum, int r)//** nPr= n!/(n-r)! (����:�ߺ�����): n�� ������ r���̾� ������ �� �ִ� ����Ǽ�
{
	if (r == 1) return Pnum;
	else return Pnum * PermutationNum(Pnum - 1, r - 1);
	//else return Factorial(Pnum) / Factorial(Pnum - r);
}

int Factorial(int Fnum) //���丮�� ����� ��: n! = n*(n-1)*(n-2)*...*(1)
{
	if (Fnum == 1) return 1;
	else return Fnum * Factorial(Fnum - 1);
}*/