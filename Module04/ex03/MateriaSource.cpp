#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : slot (new AMateria* [4])
{
    for (int i = 0; i < 4; i++)
        slot[i] = NULL;
    // std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &mt) : slot (new AMateria* [4])
{
    *this = mt;
    // std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &mt)
{
    for (int i = 0; i < 4 && mt.slot[i]; i++)
    {
        this->slot[i] = mt.slot[i]->clone();
        list.addMateria(this->slot[i]);
    }

    // std::cout << "MateriaSource copy assignement operator" << std::endl;
    return *this;
}

MateriaSource::~MateriaSource()
{
    delete [] slot;
    // std::cout << "MateriaSource destructor" << std::endl;
}

void    MateriaSource::learnMateria(AMateria  *mt)
{
    if (mt)
        list.addMateria(mt);

    for (int i = 0; i < 4; i++)
    {
        if (!slot[i])
        {
            slot[i] = mt;
            break;
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (slot[i] && slot[i]->getType() == type)
            return slot[i]->clone();
    }
    return NULL;
}