#include "AMateria.hpp"

AMateria::AMateria() : type ("None")
{
    std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : type (type)
{
    std::cout << "AMateria parametrize constructor" << std::endl;
}


AMateria::~AMateria()
{
    std::cout << "AMateria destructor" << std::endl;
}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void) target;
}
