#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
    public:
        Dummy();
        ATarget *clone() const;
        ~Dummy();
};

#endif