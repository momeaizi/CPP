#ifndef NATERIASOURCE_HPP
#define NATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "MateriaList.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        AMateria    **slot;
        MateriaList list;

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &mt);
        MateriaSource   &operator=(const MateriaSource &mt);
        ~MateriaSource();

        void        learnMateria(AMateria *mt);
        AMateria    *createMateria(std::string const &type);
};







#endif