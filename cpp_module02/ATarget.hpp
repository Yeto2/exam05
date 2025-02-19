#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    private:
        std::string type;
    public:
        ATarget(std::string type);
        std::string const &getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(const ASpell &spell) const;
        virtual ~ATarget();
};

#endif