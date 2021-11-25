// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
  
int main()
{
	int x;
	std::cout << "x"; std::cin >> x;
		/*switch (x)
		{
		case 5: x++; std::cout << x; break;
		case  0: x--; std::cout << x; break; // выражение в case x>0 бессмысленно тк case проверяет x на соответствие константе case. Убираем условие x>
			default: x += 66; std::cout << x;
		}*/

	/*switch (x)
	{
	case 5: x += 7; std::cout << x; break;
	case 6: case 11: --x; std::cout << x; break; // у case 6  и case 11 одинаковое условие, оба выполняются при совпадении с x.
	}*/
	/*switch (5)
	{
	case 5: x += 7; std::cout << x; break;// тк в условии switch стои 5 то выполняться будет только case 5
	case 6: case 11: --x; std::cout << x; break;
	}*/
}

