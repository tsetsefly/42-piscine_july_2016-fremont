#include <stdio.h>

int match(char *s1, char *s2);

int main()
{
	char *str1;
	char *str2;
	int result;

	str1 = "";
	str2 = "";
	result = match(str1, str2) ? printf("TRUE") : printf("FALSE");
	return (0);
}