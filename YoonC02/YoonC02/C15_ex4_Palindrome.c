/*#include <stdio.h> //***ȸ��(Palindrome) ������ ������ �ڷ������� �Ȱ��� �ܾ� : pop, level, noon
									//#include <string.h>   **** strlen, strcmp
int FoncStrlen(char * pstr);		//���ڿ� ���� ���ϴ� �Լ�	
void Palindrome(char *ptr);			

void SimPalindrome(char *ptr)
{
	int i, j, cnt=0;
	int strLen = FoncStrlen(ptr);

	for (i = 0, j = strLen - 1; (i < strLen / 2) && (ptr[i] == ptr[j]); i++, j--)
	{
		cnt++;
	}
	(cnt == strLen / 2) ? printf("SimPalindrome: ȸ���Դϴ�.\n") : printf("SimPalindrome: ȸ���� �ƴմϴ�.\n");
}

int main(void)
{
	char str[20];

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);		//���ڿ��Է�: scanf("%s",str), gets(str):ũ������x ��������o
	str[strlen(str) - 1] = '\0';		//fgets���� ���ڿ� ������'\n'�����ϱ�
	//puts(str);
	//printf("%d %d\n", sizeof(str), strlen(str));   //������: ó�������� 20, ���ڱ��� = ���ڰ���
	printf("������ ����: %d\n\n", FoncStrlen(str));
	Palindrome(str);
	SimPalindrome(str);

	return 0;
}

int FoncStrlen(char * pstr)
{
	int i, len = 0;
	for (i = 0; pstr[i] != 0; i++)
	{
		len++;
	}
	return len;
}
void Palindrome(char *ptr)
{
	int i = 0, j, cnt = 0;
	int strLen = FoncStrlen(ptr);
	j = strLen - 1;

	for (i = 0; i < strLen / 2; i++)
	{
		if(ptr[i] == ptr[j])
		{
			printf("%d������ %d��° ���� ���� ok\n", i, j);
			cnt++;
		}
		else
		{
			printf("%d������ %d��° ���� �ٸ� xx\n", i, j);
		}
		j--;
	}

	if (cnt == strLen / 2)
		printf("Palindrome: ȸ���Դϴ�.\n\n");
	else
		printf("Palindrome: ȸ���� �ƴϿ���!\n\n");
}
*/