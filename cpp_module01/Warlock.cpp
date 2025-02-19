
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
    if(spell != NULL)
        all[spell->getName()] = spell;

}

void Warlock::forgetSpell(std::string name)
{
    std::map<std::string, ASpell *>::iterator it = all.find(name);
    if(it != all.end())
    {
        all.erase(it);
    }
}

void Warlock::launchSpell(std::string name, ATarget &target)
{
    std::map<std::string, ASpell *>::iterator it = all.find(name);
    if(it != all.end())
    {
        it->second->launch(target);
    }
}