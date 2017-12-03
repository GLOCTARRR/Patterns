#ifndef AUTOMOBILE_BWM_H_
#define AUTOMOBILE_BWM_H_

#include "automobile.h"

namespace automobile
{

class Bwm: public Automobile
{

public:
	Bwm();
	virtual ~Bwm();
	void getInfo() override;
};

} /* namespace automobile*/

#endif /* AUTOMOBILE_BWM_H_ */
