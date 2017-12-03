#include "automobile.h"

#include "audi.h"
#include "bmw.h"

namespace fabric
{

Automobile::Automobile()
{

}

Automobile::~Automobile()
{

}

void Automobile::getInfo()
{
	std::cout << "auto" << std::endl;
}

Automobile* Automobile::createAuto( int id)
{
	Automobile* automobile;
	switch( id)
	{
		case AutoId::AudiId:
			automobile = new Audi();
			break;
		case AutoId::BmwId:
			automobile = new Bmw();
			break;
	}
	return automobile;
}

} /* namespace fabric */
