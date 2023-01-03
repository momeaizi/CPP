#include "Ice.hpp"

Ice::Ice() :  AMateria("ice")
{
    // std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
    // std::cout << "Ice copy constructor" << std::endl;
}

Ice    &Ice::operator=(const Ice &ice)
{
    (void)ice;
    // std::cout << "Ice copy assignement operator" << std::endl;
    return *this;
}

Ice::~Ice()
{
    // std::cout << "Ice destructor" << std::endl;
}

AMateria    *Ice::clone() const
{
    return new Ice();
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
