// HT_Ur4_mod7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include "Pointers_Header.h" 

using namespace std;



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
			Print_cnt(nach_str, strlen(str_art));

			char Str_forCopy[80];
			char * destination = &Str_forCopy[0];

			Copy_str_inv(nach_str, destination, strlen(str_art));
			printf("\t Skopirovannaia stroka: \n");
			Print_cnt(destination, strlen(str_art));

		} break;
		}
		cout << " vvod N zadania, 0 - exit ";
		cin >> number;
	} while (number != 0);
	return 0;
}
