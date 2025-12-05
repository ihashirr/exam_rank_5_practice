#include <iostream>
class ATarget;
class ASpell{
    protected:
        std::string name;
        std::string effects;
    public:
    ASpell();
        std::string getName()const;
        std::string getEffects()const;
        virtual ASpell *clone() const = 0;
        ASpell(std::string name,std::string effects);
        virtual ~ASpell();

        void launch(const ATarget &target)const;
    private:
        ASpell(const ASpell &);
        ASpell &operator=(const ASpell &);
};
