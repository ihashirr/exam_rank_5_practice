#pragma once
#include "ASpell.hpp"

class Polymorph : public ASpell{

    public:
        Polymorph();
        virtual ASpell *clone()const;
        ~Polymorph();

};