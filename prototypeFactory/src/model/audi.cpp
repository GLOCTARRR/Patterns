#include "audi.h"

#include <iostream>

namespace automobile
{

Audi::Audi()
{

}

Audi::~Audi()
{

}

Automobile* Audi::clone()
{
	return new Audi( *this);
}

void Audi::info()
{
	std::cout << "Audi" << std::endl;
}

} /* namespace automobile */
