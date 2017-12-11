#ifndef REUSABLEPOOL_H_
#define REUSABLEPOOL_H_

#include "reusable.h"

#include <string>
#include <list>

namespace pool
{

class ReusablePool
{
public:
	ReusablePool( int number);
	virtual ~ReusablePool();

	ReusablePtr getReusable();
	void addReusable( ReusablePtr reusablePtr_);



public:
	std::list<ReusablePtr> reusables_;
};

} /* namespace pool */

#endif /* REUSABLEPOOL_H_ */
