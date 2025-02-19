#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator()
{
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if(target != NULL)
        all[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
    std::map<std::string, ATarget *>::iterator it = all.find(name);
    if(it != all.end())
        all.erase(it);
}

ATarget* TargetGenerator::createTarget(std::string const &name)
{
    std::map<std::string, ATarget *>::iterator it = all.find(name);
    if(it != all.end())
        return it->second->clone();
    return NULL;
}

TargetGenerator::~TargetGenerator()
{

}