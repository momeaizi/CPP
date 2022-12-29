#include "Character.hpp"

Character::Character() : slot (new AMateria* [4]), name ("----")
{
    for (int i = 0; i < 4; i++)
        slot[i] = NULL;
    std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string name) : slot (new AMateria* [4]), name (name)
{
    for (int i = 0; i < 4; i++)
        slot[i] = NULL;
    std::cout << "Character parametrize constructor" << std::endl;
}

Character::Character(const Character &character) : slot (new AMateria* [4]), name (character.name)
{
    *this = character;
    std::cout << "Character copy constructor" << std::endl;
}

Character   &Character::operator=(const Character &character)
{
    this->name = character.name;

    for (int i = 0; i < 4 && character.slot[i]; i++)
    {
        this->slot[i] = character.slot[i]->clone();
        list.addMateria(this->slot[i]);
    }

    std::cout << "Character copy assignement operator" << std::endl;
    return *this;
}

Character::~Character()
{
    delete [] slot;
    std::cout << "Character destructor" << std::endl;
}


std::string const &Character::getName() const
{
    return name;
}

void    Character::equip(AMateria *m)
{
    list.addMateria(m);

    for (int i = 0; i < 4; i++)
    {
        if (!slot[i])
        {
            slot[i] = m;
            return ;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        return ;
    slot[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx <= 3 && idx >= 0 && slot[idx])
        slot[idx]->use(target);
}