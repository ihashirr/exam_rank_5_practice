#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(){}
ASpell::ASpell(const ASpell &other):name(other.name),effects(other.effects){}
ASpell::ASpell(std::string const &name,std::string const &effects):name(name),effects(effects){}
ASpell &ASpell::operator=(ASpell const &other){

    if( this != &other){
        this->name = other.name;
        this->effects=other.effects;
    }

    return (*this);
}
ASpell::~ASpell(){}
std::string  const &ASpell::getName()const{
    return this->name;
}
 
std::string  const &ASpell::getEffects()const{
    return this->effects;
}
void ASpell::launch(const ATarget &target) const{
    target.getHitBySpell((*this));
}