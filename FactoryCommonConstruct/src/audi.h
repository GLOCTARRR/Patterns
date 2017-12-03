#ifndef AUDI_H_
#define AUDI_H_

#include "automobile.h"

namespace fabric
{

class Audi: public Automobile
{
public:
	Audi();
	virtual ~Audi();
	void getInfo() override;
};

} /* namespace fabric */

#endif /* AUDI_H_ */
