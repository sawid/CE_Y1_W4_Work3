#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int l = 0, s = 0;
	char str[1000];
	scanf("%[^\n]", &str);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			l = 1;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			s = 1;
		}
	}
	if (s == 1 && l == 1)
	{
		printf("Mix");
	}
	else
	{
		if (s == 1)
		{
			printf("All Small Letter");
		}
		else if (l == 1)
		{
			printf("All Capital Letter");
		}
	}
}