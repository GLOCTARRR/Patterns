#ifndef AUTOMOBILE_H_
#define AUTOMOBILE_H_

#include <iostream>
#include <list>

namespace fabric
{


enum AutoId
{
	AudiId = 1,
	BmwId
};

class Audi;
class Bmw;

class Automobile
{



public:
	Automobile();
	virtual ~Automobile();

	static Automobile* createAuto( int id);
	virtual void getInfo();

};

using ListAutomobile = std::list<Automobile*>;

} /* namespace fabric */

#endif /* AUTOMOBILE_H_ */
