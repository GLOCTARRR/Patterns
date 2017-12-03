#ifndef AUTOMOBILE_AUDI_H_
#define AUTOMOBILE_AUDI_H_

#include "automobile.h"

namespace automobile
{

class Audi: public Automobile
{
public:
	Audi();
	virtual ~Audi();
	void getInfo() override;
};

} /* namespace automobile */

#endif /* AUTOMOBILE_AUDI_H_ */
