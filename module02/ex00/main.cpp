//
// Created by Leo JULIEN on 4/27/21.
//

#include <iostream>
#include "Fixed.hpp"

int     main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
}
