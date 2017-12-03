#include "bmwFactory.h"

namespace fabric
{

BmwFactory::BmwFactory()
{

}

BmwFactory::~BmwFactory()
{

}

automobile::Automobile* BmwFactory::createInstance()
{
	automobile::Bwm* bmw = new automobile::Bwm();
	return bmw;

}


} /* namespace fabric*/
