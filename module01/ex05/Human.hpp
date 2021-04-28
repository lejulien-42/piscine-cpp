//
// Created by Leo JULIEN on 4/25/21.
//

#ifndef CPP_HUMAN_HPP
#define CPP_HUMAN_HPP
#include "Brain.hpp"


class Human {
private:
    const Brain b;
public:
    const Brain       &getBrain() const;
    std::string identify() const;
};


#endif //CPP_HUMAN_HPP
