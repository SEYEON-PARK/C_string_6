#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "�ȳ�.", b[30] = "�ȳ��ϼ���.";
	printf("%d\n", strncmp(a, b, 2));

	return 0;
}