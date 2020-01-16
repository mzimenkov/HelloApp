#include <stdio.h>
#include <locale.h>
int main(void)
{
	char *locale = setlocale(LC_ALL, "");
	printf("Приветик \n");
	return 0;
}