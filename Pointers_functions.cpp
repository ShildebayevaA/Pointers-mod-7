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
	int d = c;
	for(int i=0;i<c;i++)
	{
		*b = *(a + d-1);
		b++;
		d--;
	}
}
// -----------------------------------------------------------
void Print_cnt(char*b, int c)
{
	for (int i = 0; i < c; i++)
	{
		printf("%c", *b);
		b++;
	}
	printf("\n");
}

