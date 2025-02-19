#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell(std::string name, std::string effects);
        std::string getName();
        std::string getEffects() const;
        virtual ASpell *clone() const = 0;
        void launch(const ATarget &target) const;
        virtual ~ASpell();
};

#endif