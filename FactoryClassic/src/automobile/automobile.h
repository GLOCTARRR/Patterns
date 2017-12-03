#ifndef AUTOMOBILE_AUTOMOBILE_H_
#define AUTOMOBILE_AUTOMOBILE_H_

#include <iostream>
#include <list>

namespace automobile
{

class Automobile
{

public:
	Automobile();
	virtual ~Automobile();
	virtual void getInfo();
};

using AutomobilesList = std::list<Automobile*>;

} /* namespace automobile */

#endif /* AUTOMOBILE_AUTOMOBILE_H_ */
