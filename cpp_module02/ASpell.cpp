#include "ASpell.hpp"
        
        
ASpell::ASpell(std::string name, std::string effects) : name(name) , effects(effects)
{

}

std::string ASpell::getName()
{
    return this->name;
}

std::string ASpell::getEffects() const
{
    return this->effects;
}

void ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}

ASpell::~ASpell()
{
    
}