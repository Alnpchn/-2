#include <locale.h>
#include<stdio.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	printf("\t%20s\n", "��� �����");
	printf("\t%10s\n", "��� �����");
	printf("%10.5f\n", 12.234567);
	printf("������� �� ������� % d �� % d ����� % d\n",7,5,7%5);
	printf("������������ % d �� % d ����� % d\n\n", 2000, 4, 2000*4);
	printf("%g ��������� %e ����� %f\n", 5., 2., 5./2);
	printf("%d ��������� %d ����� %d\n", 5., 2., 5. / 2);
	printf("%f ��������� %f ����� %f\n", 5., 2., 5. / 2);
	printf("%e ��������� %e ����� %e\n", 5., 2., 5. / 2);
	printf("%g ��������� %g ����� %g\n", 5., 2., 5. / 2);
}