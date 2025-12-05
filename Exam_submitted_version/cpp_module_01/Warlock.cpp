#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Warlock::Warlock(std::string name,std::string title):name(name),title(title){
    std::cout<<getName()<<": This looks like another boring day."<<std::endl;
}
Warlock::~Warlock(){
    for(std::map <std::string,ASpell *>::iterator it= book.begin();it!=book.end();++it)
        delete it->second;
    book.clear();

    std::cout<<getName()<<": My job here is done!"<<std::endl;
}
const std::string &Warlock::getName()const{return this->name;}
const std::string &Warlock::getTitle()const{return this->title;}
void Warlock::setTitle(const std::string &title){this->title=title;}

void Warlock::introduce()const{
    std::cout<< getName()<< ": I am "<< getName() << ", " << getTitle()<< "!" <<std::endl;
}



void Warlock::learnSpell(const ASpell *spell){

    if(spell)
        book.insert(std::pair <std::string,ASpell *>(spell->getName(),spell->clone()));
}

void Warlock::forgetSpell(std::string name){
    std::map <std::string,ASpell *>::iterator it = book.find(name);
    if(it!=book.end())
    {
        delete it->second;
        book.erase(it);
    }
}

void Warlock::launchSpell(std::string name,const ATarget &target){
    std::map <std::string,ASpell *>::iterator it = book.find(name);
    if(it!=book.end())
    {
        it->second->launch(target);
    }
}