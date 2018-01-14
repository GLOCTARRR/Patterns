#include "automobileprototypefactory.h"
#include "audi.h"
#include "bmw.h"

namespace automobile
{

AutomobilePrototypeFactory::AutomobilePrototypeFactory()
{

}

AutomobilePrototypeFactory::~AutomobilePrototypeFactory()
{

}

Automobile* AutomobilePrototypeFactory::createAudi()
{
	static Audi audi;
	return audi.clone();
}

Automobile* AutomobilePrototypeFactory::createBmw()
{
	static Bmw bmw;
	return bmw.clone();
}


} /* namespace automobile */
