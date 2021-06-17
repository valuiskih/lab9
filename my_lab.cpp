#define _CRT_SECURE_NO_WARNINGS
#include "my_lab.h"
#include <stdio.h>
#include <stdlib.h>


void enter_polynom(int* mnog, int& dlin) // mnog = массив с числами An
{
	char s[32];
	int coef = 0;
	for (int i = 1; i <= dlin; i++)
	{
		sprintf(s, "Enter factor x%d = ", i);
		coef = enter_int(s, "Error factor\n");
		mnog[i] = coef;
	}
}

int multiplication(int* mnog1, int*& mnogdiv, int dlin1) // посчитать коэфициенты многочленов
{
	int f = 0;
	mnogdiv = (int*)malloc(sizeof(int));
	mnogdiv[dlin1] = 1;
	for (int i = dlin1-1; i <= 0; i--) 
		mnogdiv[i] += 
	
}

void print_result(int* mnogdiv, int* mnog1, int dlin1, int f)
{
	for (int i = dlin1; i >= 0; i--)
	
		printf("x^%d = %d\n", i, f);   // вывести mnogdiv в обратном порядке либо записать сразу в обратном порядке
		
}



bool is_digit(char s)
{
	return ((s >= '0') && (s <= '9'));
}

int enter_int(const char* caption, const char* error_caption)
{
	char a;
	int size = 100;
	char* str;
	char* str1;
	int i = 0;
	printf(caption);
	str = (char*)malloc(size * sizeof(char));
	if (!str)
		return 0;
	while (1)
	{
		a = getchar();
		if (a == '\n')
			a = '\0';
		if (!is_digit(a) && a)
		{
			while (getchar() != '\n');
			printf(error_caption);
			i = 0;
			continue;
		}
		if (i + 1 == size)
		{
			size += 100;

			str1 = (char*)realloc(str, size * sizeof(char));
			if (!str1)
			{
				free(str);
				free(str1);
				return 0;
			}
			str = str1;
		}
		str[i] = a;
		if (!a)
			break;
		i++;
	}
	int b = atoi(str);
	free(str);
	return b;
}


