// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int x, y, z,m;
int main()
{
    std::cin >> x >> y >> z;
    if (x > y)
        m = x;
    else
        m = y;
    if (m > z)
        std::cout << "bolshee>" << m;
    else
        std::cout << "bolshee>" << z;
}

