#include <locale.h>

#include <stdio.h>

void name();
void date();

void main()

{
	date();
	name();
}


void name()
{
	setlocale(LC_ALL, "RUS");

	puts("***********************************************");
	puts("*                                             *");
	puts("*  Тема: Разработка консольного приложения    *");
	puts("*                                             *");
	puts("*	  Выполнил Ростиславин А.Б.           *");
	puts("*                                             *");
	puts("***********************************************");

}


void date()

{

	setlocale(LC_ALL, "RUS");
	puts(" _       _    _         _    _   _    _    _  ");
	puts("| |  |   _|   _|  |_|  |_   |_    |  |_|  |_| ");
	puts("|_|  |  |_    _|    |   _|  |_|   |  |_|   _| ");

}