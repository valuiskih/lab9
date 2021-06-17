#define _CRT_SECURE_NO_WARNINGS
#include "my_lab.h"
#include <stdio.h>
#include <stdlib.h>

//Ввести n и числа a1, a2, ..., an. Вычислить и вывести коэффициенты многочлена p(x) = (x - a1) * (x - a2) * ... * (x - an) 
//(Для этого написать вспомогательную функцию для умножения двух многочленов)

int main()
{
	int dlin1;    // dlin1 количество чисел
	int* mnogdiv = 0;
	dlin1 = enter_int("Enter degree of multinomial\n", "Error degree\n");
	if (dlin1 > 15 || dlin1 < 0)
	{
		printf("Error");
		exit(1);
	}
	int* mnog1 = (int*)malloc((dlin1 + 1) * sizeof(int));  // mnog1 массив с числами An
	if (!mnog1)
		exit(1);
	enter_polynom(mnog1, dlin1);
	int f = multiplication(mnog1, mnogdiv, dlin1);   // mnogdiv массив с окончательными значениями
	print_result(mnogdiv, mnog1, dlin1, f);
	free(mnogdiv);
	free(mnog1);
	return 0;
}
