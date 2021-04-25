//
// Created by Leo JULIEN on 4/25/21.
//

#include "Human.hpp"

std::string Human::identify()
{
    return (this->b.identify());
}

Brain&  Human::getBrain(){
    return (this->b);
}