#ifndef MATERIALIST_HPP
#define MATERIALIST_HPP

#include "AMateria.hpp"


typedef struct node
{
    const AMateria    *materia;
    node    *next;
}   node;



class MateriaList
{
    private:
        node    *__materias;
    public:
        MateriaList();
        ~MateriaList();

        void    addMateria(const AMateria *materia);
};




#endif