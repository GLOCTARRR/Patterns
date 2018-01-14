#include "bmw.h"

#include <iostream>

namespace automobile
{

Bmw::Bmw()
{

}

Bmw::~Bmw()
{

}

void Bmw::info()
{
	std::cout << "Bmw" << std::endl;
}

Automobile* Bmw::clone()
{
	return new Bmw( *this);
}

} /* namespace automobile */
