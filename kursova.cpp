// курсова робота.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "stdafx.h"
#include <conio.h>
#include <locale.h>
#include <windows.h>

//-----------------------------------------------
int coord(char m)
{
	if (m == 'a')
		return(0);
	if (m == 'b')
		return(1);
	if (m == 'c')
		return(2);
	if (m == 'd')
		return(3);
	if (m == 'e')
		return(4);
	if (m == 'f')
		return(5);
	if (m == 'g')
		return(6);
	if (m == 'h')
		return(7);
	if (m == 'i')
		return(8);
	if (m == 'j')
		return(9);
}
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int fld[10][10];
	char x1, x2;
	int y1, y2, x3, x4, i, b, a;
	char x;
	int y, x5;
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
			fld[a][b] = 0;
	}


	int q;
	for (q = 0; q <= 5; q++)
	{
		if (q == 0)
			puts("Введите координаты 4-палубного корабля");
		if (q == 1 || q == 2)
			puts("Введите координаты 3-палубного корабля");
		if (q >= 3 && q <= 5)
			puts("Введите координаты 2-палубного корабля");
		scanf("%c %d - %c %d", &x1, &y1, &x2, &y2);
		y1 = y1 - 1;
		y2 = y2 - 1;
		x3 = coord(x1);
		x4 = coord(x2);
		if (y1 == y2)
		{
			for (i = x3; i <= x4; i++)
				fld[i][y1] = 1;
		}
		if (x3 == x4)
		{
			for (i = y1; i <= y2; i++)
				fld[x3][i] = 1;
		}
	}
	int r;
	for (r = 0; r <= 3; r++)
	{
		if (r == 0)
			printf("Введите координату первого однопалубного корабля");
		if (r == 1)
			printf("Введите координату второго однопалубного корабля");
		if (r == 2)
			printf("Введите координату третьего четырёхпалубного корабля");
		if (r == 3)
			printf("Введите координату четвёртого  однопалубного корабля");

		scanf("%c %d", &x, &y);
		y = y - 1;
		x5 = coord(x);
		fld[x5][y] = 1;
	}


	puts("x|a|b|c|d|e|f|g|h|i|j|");
	puts("-|--------------------");
	int z, p;
	for (z = 0; z <= 9; z++)
	{
		printf("%d|", z + 1);
		for (p = 0; p <= 9; p++)
			printf("%d ", fld[p][z]);
		printf("\n");
	}

	_getch();

}