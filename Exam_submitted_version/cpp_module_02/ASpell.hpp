#pragma once
#include <iostream>
class ATarget;
class ASpell{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(const ASpell &other);
        ASpell(std::string const &name,std::string const &effects);
        ASpell &operator=(ASpell const &other);        
        virtual ~ASpell();
        virtual ASpell *clone() const= 0;

        std::string const &getName()const;
        std::string const &getEffects()const;

        void launch(const ATarget &target)const;
};