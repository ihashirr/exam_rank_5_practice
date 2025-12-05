#include <iostream>
class ASpell;
class ATarget{
    protected:
        std::string type;
     public:
        const std::string &getType()const;
        virtual ATarget *clone() const = 0;
        ATarget(std::string);
        ~ATarget();
        void getHitBySpell(const ASpell &)const;
    private:
        ATarget(const ATarget &);
        ATarget &operator=(const ATarget &);

};
