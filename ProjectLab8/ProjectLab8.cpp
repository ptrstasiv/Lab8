#include "pch.h"

#include <iostream>
#include <cmath>

using namespace System;

int main(array<System::String ^> ^args)
{   
    while (1)
    {
        std::cout << "Enter equation coefficients:\n";

        float a = 0.0f, b = 0.0f, c = 0.0f;

        std::cout << "Enter a: ";
        std::cin >> a;

        std::cout << "Enter b: ";
        std::cin >> b;

        std::cout << "Enter c: ";
        std::cin >> c;


        float D = b * b - 4 * a * c;

        if (D < 0.0f)
            std::cout << "\nThere is no real roots!";
        else
        {
            float x = -b / (2 * a);

            if (D == 0.0f)
                std::cout << "\nThere is two equal roots: x1 = x2 = " << x;
            else
            {
                float x2 = std::sqrtf(D) / (2 * a);
                float x1 = x2 + x;
                x2 = x - x2;

                std::cout << "\nThere is two roots: x1 = " << x1 << " x2 = " << x2;
            }
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();

        std::cout << "\n\n";
    }

    return 0;
}
