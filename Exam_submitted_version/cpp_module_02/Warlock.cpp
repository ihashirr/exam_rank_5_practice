#include "./Warlock.hpp"
#include "ASpell.hpp"
const std::string &Warlock::getName() const
{
    return this->name;
}
const std::string &Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}
Warlock::Warlock(const std::string &name, const std::string &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}
void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}
Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const & name)
{
    spellBook.forgetSpell(name);
}
void Warlock::launchSpell(const std::string &name, const ATarget &target)
{
    ASpell *tmp = spellBook.createSpell(name);
    if(tmp){
        tmp->launch(target);
        delete tmp;
    }
}