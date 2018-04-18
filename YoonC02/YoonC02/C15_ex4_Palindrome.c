/*#include <stdio.h> //***회문(Palindrome) 앞으로 읽으나 뒤로읽으나 똑같은 단어 : pop, level, noon
									//#include <string.h>   **** strlen, strcmp
int FoncStrlen(char * pstr);		//문자열 길이 구하는 함수	
void Palindrome(char *ptr);			

void SimPalindrome(char *ptr)
{
	int i, j, cnt=0;
	int strLen = FoncStrlen(ptr);

	for (i = 0, j = strLen - 1; (i < strLen / 2) && (ptr[i] == ptr[j]); i++, j--)
	{
		cnt++;
	}
	(cnt == strLen / 2) ? printf("SimPalindrome: 회문입니다.\n") : printf("SimPalindrome: 회문이 아닙니다.\n");
}

int main(void)
{
	char str[20];

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);		//문자열입력: scanf("%s",str), gets(str):크기제한x 에러가능o
	str[strlen(str) - 1] = '\0';		//fgets사용시 문자열 마지막'\n'제거하기
	//puts(str);
	//printf("%d %d\n", sizeof(str), strlen(str));   //사이즈: 처음선언한 20, 문자길이 = 글자갯수
	printf("문자의 길이: %d\n\n", FoncStrlen(str));
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
			printf("%d번쨰와 %d번째 문자 같음 ok\n", i, j);
			cnt++;
		}
		else
		{
			printf("%d번쨰와 %d번째 문자 다름 xx\n", i, j);
		}
		j--;
	}

	if (cnt == strLen / 2)
		printf("Palindrome: 회문입니다.\n\n");
	else
		printf("Palindrome: 회문이 아니에용!\n\n");
}
*/