// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stdio.h"
int x,y;
int main()
{
    
   std::cout << "x: "; std::cin >> x;
   std::cout << "y: "; std::cin >> y;
  // std::cout << "y: "; std::cin >> y;
   /*  y = x % 5;
    switch (y)
    {
    case 2: x = 0; std::cout << x;break;
    case 3: x *= -1; std::cout << x;break;
    default: std::cout << "drugoq ostatok";break;
    }*/
  /* switch (x)
   {
   case 5: y = x * x;std::cout << y;break;
   case 7: x = x % 2;std::cout << x;break;
   default: y++; std::cout << y; break;
   }*/
   switch (x)
   {
   case 1:case 2:case 3:case 4: break; std::cout << " x<5";
   case 5: ++x; std::cout << x; break;
   default: std::cout << y; std::cout << x; break;
    }
   

}

