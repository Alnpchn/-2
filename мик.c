
#include <locale.h>
#include<stdio.h>
int N, K;
void main(void)
{
	setlocale(LC_ALL, "RUS");
	printf("������ %g ����� %g ����� %g ������\n", 15., 38., 47.);
	printf("���� %g ������ �����\n", 939.);
	printf("�� �������� �������� %g ����� %g �����\n", 8., 22.);
	printf("� 8:00 ������ %g ������\n", 28740.);
	printf("������� ���=%g ����� � ������� ������ %g ����\n", N/24., K/60.);
}