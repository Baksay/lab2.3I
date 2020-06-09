#include "pch.h"
#include <iostream>
#include "resistor.h"
#include "posled.h"
#include "paralell.h"
#include <vector>


int main()
{
    std::vector<float> v1 = { 2, 4, 8, 3 };
    std::vector<float> v2 = { 2, 2 };

    posled R1(v1);
    R1.resist();
    R1.printresult();

    std::cout << "    ";

    paralell R2(v2);
    R2.resist();
    R2.printresult();
    return 0;
}