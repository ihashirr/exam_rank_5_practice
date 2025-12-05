#include "ASpell.hpp"
#include "ATarget.hpp"
ASpell::ASpell(std::string name,std::string effects):name(name),effects(effects){}
std::string ASpell::getName()const{return this->name;}
std::string ASpell::getEffects()const{return this->effects;}
ASpell::~ASpell(){}

void ASpell::launch(const ATarget &target)const{
    target.getHitBySpell(*this);
}