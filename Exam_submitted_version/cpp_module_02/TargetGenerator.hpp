#pragma once
#include <iostream>
#include <map>
class ATarget;
class ASpell;

class TargetGenerator {
    private:
        TargetGenerator &operator=(const TargetGenerator &other);
        TargetGenerator(const TargetGenerator &other);
        std::map<std::string, ATarget *> book;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &name);
        ATarget* createTarget(std::string const &name);
};