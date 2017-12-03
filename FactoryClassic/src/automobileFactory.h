#ifndef AUTOMOBILEFACTORY_H_
#define AUTOMOBILEFACTORY_H_

#include "automobile/automobile.h"

namespace fabric
{

class AutomobileFactory
{

public:
	AutomobileFactory();
	virtual ~AutomobileFactory();

	virtual  automobile::Automobile* createInstance() = 0;
};

} /* namespace fabric */

#endif /* AUTOMOBILEFACTORY_H_ */
