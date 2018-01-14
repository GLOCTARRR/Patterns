#ifndef SRC_MODEL_AUDI_H_
#define SRC_MODEL_AUDI_H_

#include "automobile.h"
#include "automobileprototypefactory.h"

namespace automobile
{

class Audi: public Automobile
{
	friend AutomobilePrototypeFactory;

public:
	Automobile* clone();
	void info();
	virtual ~Audi();

private:
	Audi();
};

} /* namespace automobile */

#endif /* SRC_MODEL_AUDI_H_ */
