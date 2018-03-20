#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

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

