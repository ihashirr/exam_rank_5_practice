#include "ATarget.hpp"
#include "ASpell.hpp"
ATarget::ATarget(){}
ATarget::ATarget(std::string type):type(type){}
ATarget::~ATarget(){}

std::string const &ATarget::getType()const{
    return(this->type);
}
void ATarget::getHitBySpell(const ASpell &src) const{
    std::cout<<getType()<<" has been "<<src.getEffects()<<"!\n";
}