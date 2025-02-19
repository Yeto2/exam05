#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;
    public:
        Warlock(std::string name, std::string title);
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(std::string const &str);
        void introduce() const;
        ~Warlock();
};

#endif