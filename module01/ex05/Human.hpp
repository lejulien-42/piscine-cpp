//
// Created by Leo JULIEN on 4/25/21.
//

#ifndef CPP_HUMAN_HPP
#define CPP_HUMAN_HPP
#include "Brain.hpp"


class Human {
private:
    Brain b;
public:
    Brain       &getBrain();
    std::string identify();
};


#endif //CPP_HUMAN_HPP
