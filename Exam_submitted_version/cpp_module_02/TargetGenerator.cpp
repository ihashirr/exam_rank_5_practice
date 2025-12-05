#include "SpellBook.hpp"
#include "ASpell.hpp"
#include "TargetGenerator.hpp"
#include "ATarget.hpp"
TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator()
{
	for(std::map<std::string, ATarget *>::iterator it =book.begin(); it!=book.end() ;++it)
		delete it->second;
	book.clear();
} 

void TargetGenerator::learnTargetType(ATarget *target){
    if(!target)
        return;
    std::string type = target->getType();
    std::map<std::string,ATarget *>::iterator it = book.find(type);
    if(it!=book.end()){
        delete it->second;
        book.erase(it);
    }

    book[type] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &name){
    std::map<std::string,ATarget *>::iterator it= book.find(name);
    if(it!=book.end()){
        delete it->second;
        book.erase(it);
    }
}
ATarget* TargetGenerator::createTarget(std::string const &name){
    std::map<std::string,ATarget *>::iterator it = book.find(name);
    if(it!=book.end())
    {
        return it->second->clone();
    }
    return NULL;
}