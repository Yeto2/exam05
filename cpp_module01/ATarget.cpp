#include "ATarget.hpp"

ATarget::ATarget(std::string type) : type(type)
{
}

std::string const &ATarget::getType() const
{
    return this->type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget::~ATarget()
{

}