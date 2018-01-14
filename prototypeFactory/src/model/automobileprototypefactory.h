#ifndef SRC_MODEL_AUTOMOBILEPROTOTYPEFACTORY_H_
#define SRC_MODEL_AUTOMOBILEPROTOTYPEFACTORY_H_

#include "automobile.h"

namespace automobile
{

class AutomobilePrototypeFactory
{
public:
	AutomobilePrototypeFactory();
	virtual ~AutomobilePrototypeFactory();

	Automobile* createAudi();
	Automobile* createBmw();

};

} /* namespace automobile */

#endif /* SRC_MODEL_AUTOMOBILEPROTOTYPEFACTORY_H_ */
