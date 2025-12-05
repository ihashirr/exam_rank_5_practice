#pragma once
#include <iostream>
#include <map>
class ASpell;

class SpellBook {
    private:
        SpellBook &operator=(const SpellBook &other);
        SpellBook(const SpellBook &other);
        std::map<std::string,ASpell *> book;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const &name);
};