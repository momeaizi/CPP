#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "MateriaList.hpp"

class Character : public ICharacter
{
    private:
        AMateria    **slot;
        std::string name;
        MateriaList list;


    public:
        Character();
        Character(std::string name);
        Character(const Character &character);
        Character   &operator=(const Character &character);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};



#endif