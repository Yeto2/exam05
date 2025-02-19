#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

void SpellBook::learnSpell(ASpell *spell)
{
    if(spell != NULL)
        all[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string const &name)
{
    std::map<std::string, ASpell *>::iterator it =  all.find(name);
    if(it != all.end())
        all.erase(it);
}

ASpell* SpellBook::createSpell(std::string const &name)
{
std::map<std::string, ASpell *>::iterator it = all.find(name);
    if(it != all.end())
        return it->second->clone();
    return NULL;
}

SpellBook::~SpellBook()
{
}