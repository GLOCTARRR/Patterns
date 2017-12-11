#include "reusable.h"

#include <iostream>

namespace pool
{

Reusable::Reusable()
{

}

Reusable::~Reusable()
{

}

void Reusable::getInfo( std::string title)
{
	std::cout << "title: " << title << std::endl;
}

} /* namespace pool */
