#include "audiFactory.h"

namespace fabric
{

AudiFactory::AudiFactory()
{

}

AudiFactory::~AudiFactory()
{

}

automobile::Automobile* AudiFactory::createInstance()
{
	automobile::Audi *audi = new automobile::Audi();
	return audi;
}

} /* namespace fabric */
