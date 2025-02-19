
#include "Warlock.hpp"


Warlock::Warlock(std::string name, std::string title) : name(name),title(title)
{
    std::cout << name << ": This looks like another boring day."<< std::endl;
}

std::string const &Warlock::getName() const
{
    return this->name;
}

std::string const &Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(std::string const &str)
{
    this->title = str;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!"<< std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!"<< std::endl;
}


void Warlock::learnSpell(ASpell *spell)
{
    war.learnSpell(spell);

}

void Warlock::forgetSpell(std::string name)
{
    war.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget &target)
{
    ASpell *tmp = war.createSpell(name);
    if(tmp != NULL)
        tmp->launch(target);
}