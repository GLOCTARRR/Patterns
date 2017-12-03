#ifndef BMW_H_
#define BMW_H_

#include "automobile.h"

namespace fabric
{

class Bmw: public Automobile
{
public:
	Bmw();
	virtual ~Bmw();

	void getInfo() override;

};

} /* namespace fabric */

#endif /* BMW_H_ */
