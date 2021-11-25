// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	if (e1) if (e2) S1; else S2;

	if (e1) { if (e2) S1; else S2; }

	if (e1) { if (e2) S1; }
	else S2;

	if (e1) if (e2) S1; else; else S2;

	if (e1) if (e2) S1; else S2; else; 
	// эквивалентны 1 2 и 3 
	// эквивалентны 4 и 5 (при записи допущены ошибки)
}


