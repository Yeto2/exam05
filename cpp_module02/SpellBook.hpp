#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>

class	ASpell;
class	ATarget;

class SpellBook
{
    private:
        std::map<std::string, ASpell *> all;
    public:
        SpellBook();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const &name);
        ~SpellBook();
};

#endif