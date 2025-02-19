#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include "ATarget.hpp"
#include <map>


class TargetGenerator
{
    private:
        std::map<std::string, ATarget *> all;
    public:
        TargetGenerator();
        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &name);
        ATarget* createTarget(std::string const &name);
        ~TargetGenerator();
};

#endif