#define _CRT_SECURE_NO_WARNINGS
#include "my_lab.h"
#include <stdio.h>
#include <stdlib.h>

//������ n � ����� a1, a2, ..., an. ��������� � ������� ������������ ���������� p(x) = (x - a1) * (x - a2) * ... * (x - an) 
//(��� ����� �������� ��������������� ������� ��� ��������� ���� �����������)

int main()
{
	int dlin1;    // dlin1 ���������� �����
	int* mnogdiv = 0;
	dlin1 = enter_int("Enter degree of multinomial\n", "Error degree\n");
	if (dlin1 > 15 || dlin1 < 0)
	{
		printf("Error");
		exit(1);
	}
	int* mnog1 = (int*)malloc((dlin1 + 1) * sizeof(int));  // mnog1 ������ � ������� An
	if (!mnog1)
		exit(1);
	enter_polynom(mnog1, dlin1);
	int f = multiplication(mnog1, mnogdiv, dlin1);   // mnogdiv ������ � �������������� ����������
	print_result(mnogdiv, mnog1, dlin1, f);
	free(mnogdiv);
	free(mnog1);
	return 0;
}
