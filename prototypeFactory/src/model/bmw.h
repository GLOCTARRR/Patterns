#ifndef SRC_MODEL_BMW_H_
#define SRC_MODEL_BMW_H_

#include "automobile.h"
#include "automobileprototypefactory.h"

#include <iostream>

namespace automobile
{

class Bmw: public Automobile {

	friend class AutomobilePrototypeFactory;

public:
	Automobile* clone();
	void info();
	virtual ~Bmw();

private:
	Bmw();
};

} /* namespace automobile */

#endif /* SRC_MODEL_BMW_H_ */
