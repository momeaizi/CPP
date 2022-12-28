#include "MateriaList.hpp"

MateriaList::MateriaList() : __materias (NULL) {}

MateriaList::~MateriaList()
{
    node    *tmp;

    while (__materias)
    {
        tmp = __materias;
        __materias = __materias->next;
        delete tmp;
    }
}

void    MateriaList::addMateria(const AMateria *materia)
{
    node *newMateria = new node;
    if (!newMateria)
        return ;
    newMateria->materia = materia;
    newMateria->next = this->__materias;
    this->__materias = newMateria;
}