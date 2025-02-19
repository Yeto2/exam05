#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <map>

class	ASpell;
class	ATarget;
class	SpellBook;

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *> all;
        SpellBook war;
    public:
        Warlock(std::string name, std::string title);
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(std::string const &str);
        void introduce() const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget &target);
        ~Warlock();
};

#endif