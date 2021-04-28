//
// Created by Leo JULIEN on 4/25/21.
//

#include "Human.hpp"

std::string Human::identify() const
{
    return (this->b.identify());
}

const Brain&  Human::getBrain() const{
    return (this->b);
}