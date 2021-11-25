// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <iso646.h>

int x, y,b;
int main()
{
	std::cout << "x";
	std::cin >> x;
	std::cout << "y";
	std::cin >> y;

	if ((x > 5) && (y >= -10)) {
		b = x + y;
		std::cout << b;
	}
	else
		std::cout << "ne";

	// эквивалентны b и d
}

