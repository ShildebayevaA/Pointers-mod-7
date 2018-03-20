# Pointers-mod-7
ukazateli urok1 mod7
// HT_Ur4_mod7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;

void Copy_str_dir(char * a, char *b);
void Copy_str_inv(char * a, char *b, int c);
void Print_cnt(char * b, int c);

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "\tUrok_4__mod_7__HomeTask. Nomer zadania 1 & 2 " << endl;
	cout << endl;

	int number = 0;

	do
	{
		switch (number)
		{
		case 1:
		{
			cout << "\t 1. Prostaia kopia stroki" << endl;
			printf("\t Isxodnaia stroka: \n");
			char str_art[] = "Иван Васильевич меняет профессию, 1973 Страна: СССР";
			char * nach_str = &str_art[0];
			Print_cnt(nach_str, strlen(str_art));

			char Str_forCopy[80];
			char * destination = &Str_forCopy[0];

			Copy_str_dir(nach_str, destination);
			printf("\t Skopirovannaia stroka: \n");
			Print_cnt(destination, strlen(str_art));

		} break;
		case 2:
		{
			cout << "\t 2. Kopia stroki s razvorotom" << endl;

			printf("\t Isxodnaia stroka: \n");
			char str_art[] = "Иван Васильевич меняет профессию, 1973 Страна: СССР";
			char * nach_str = &str_art[0];
			Print_cnt(nach_str, strlen(str_art) - 1);

			char Str_forCopy[80];
			char * destination = &Str_forCopy[0];

			Copy_str_inv(nach_str, destination, strlen(str_art));
			printf("\t Skopirovannaia stroka: \n");
			Print_cnt(destination, strlen(destination));

		} break;
		}
		cout << " vvod N zadania, 0 - exit ";
		cin >> number;
	} while (number != 0);
	return 0;
}
//---------------------------------------------------
void Copy_str_dir(char *a, char *b)
{
	while (*a != '\0')
	{
		*b = *a;
		a++;
		b++;
	}
}
//-----------------------------------------------------
void Copy_str_inv(char *a, char *b, int c)
{
	while (*a != '\0')
	{
		*b = *(a + c);
		b++;
		c--;
	}
}
// -----------------------------------------------------------
void Print_cnt(char*b, int c)
{
	for (int i = 0; i < c; i++)
	{
		cout << *b;
		b++;
	}
	printf("\n");
}

