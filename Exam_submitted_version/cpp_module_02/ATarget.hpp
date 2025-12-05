#pragma once
#include <iostream>
class ASpell;
class ATarget{
    protected:
        std::string type;
    public:
        ATarget();
        ATarget(std::string type);
        virtual ~ATarget();

        std::string const &getType()const;
        virtual ATarget *clone() const= 0;
        void getHitBySpell(const ASpell &src) const ;
};