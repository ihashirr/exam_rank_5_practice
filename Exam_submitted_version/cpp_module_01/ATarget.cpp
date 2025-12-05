#include "ATarget.hpp"
#include "ASpell.hpp"
ATarget::ATarget(std::string type ):type(type){}
const std::string &ATarget::getType()const{return this->type;}
ATarget::~ATarget(){}
void ATarget::getHitBySpell(const ASpell &spell)const{
    std::cout<< getType()<< " has been "<<spell.getEffects() << "!" <<std::endl;
}