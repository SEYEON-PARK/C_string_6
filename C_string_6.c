#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "안녕.", b[30] = "안녕하세요.";
	printf("%d\n", strncmp(a, b, 2));

	return 0;
}
