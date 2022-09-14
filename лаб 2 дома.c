#include<stdio.h>
#include<locale.h>
void main(void)
{

	setlocale(LC_ALL, "RUS");
	printf("%s\n\t", "дано:");
	int n = 3, k = 4, m = 2;
	printf("%d\n\t", n);
	printf("%d\n", 333);
	puts("        _____");
	printf("%s\n\t", "ответ:");
	printf("%+08.3f", n/333.);
}