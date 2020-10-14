#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "æ»≥Á.", b[30] = "æ»≥Á«œººø‰.";
	printf("%d\n", strncmp(a, b, 2));

	return 0;
}