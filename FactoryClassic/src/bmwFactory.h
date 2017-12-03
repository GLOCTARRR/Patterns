#ifndef BMWFACTORY_H_
#define BMWFACTORY_H_

#include "automobileFactory.h"
#include "automobile/bwm.h"

namespace fabric
{

class BmwFactory: AutomobileFactory
{
public:
	BmwFactory();
	virtual ~BmwFactory();

	automobile::Automobile* createInstance() override;

};

} /* namespace fabric*/

#endif /* BMWFACTORY_H_ */
