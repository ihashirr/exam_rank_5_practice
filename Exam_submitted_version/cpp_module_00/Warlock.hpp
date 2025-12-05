#pragma once
#include <iostream>
#include <map>
class ASpell;
class ATarget;

class Warlock{
    private:
        std::string name;
        std::string title;
        Warlock &operator =(const Warlock &);
        Warlock(const Warlock &);
        Warlock();
        std::map <std::string,ASpell *> book;
    public:
        Warlock(std::string  ,std::string  );
        ~Warlock();
        const std::string &getName()const;
        const std::string &getTitle()const;
        void  setTitle(const std::string&);
        void introduce()const;

        void learnSpell(const ASpell *);
        void forgetSpell(std::string);
        void launchSpell(std::string,const ATarget &);
};