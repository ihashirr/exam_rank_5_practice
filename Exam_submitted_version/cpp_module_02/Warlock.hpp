#include <string.h>
#include <iostream>
#include <map>

class ASpell;
class ATarget;
#include "SpellBook.hpp"

class Warlock{
    private:
        std::string name;
        std::string title;
        Warlock& operator=(const Warlock&);
        std::map<std::string,ASpell *> book;
        SpellBook spellBook;
    public:
        const std::string &getName()const;
        const std::string &getTitle()const;

        Warlock(const std::string &name,const std::string &title);
        ~Warlock();
        void setTitle(const std::string &title);
        void introduce()const;
        void learnSpell(  ASpell *aspell);
        void forgetSpell(std::string const & name);
        void launchSpell(const std::string &name,const ATarget &target);
};