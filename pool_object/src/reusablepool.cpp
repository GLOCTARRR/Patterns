#include "reusablepool.h"

namespace pool
{

ReusablePool::ReusablePool( int size)
{
	for(int i = 0; i < size; i++)
		reusables_.push_back( ReusablePtr( new Reusable()));
}

ReusablePool::~ReusablePool()
{

}

ReusablePtr ReusablePool::getReusable()
{
	if( reusables_.empty())
		return nullptr;

	ReusablePtr tempReusablePtr = reusables_.back();
	reusables_.pop_back();
	return tempReusablePtr;
}

void ReusablePool::addReusable( ReusablePtr reusablePtr)
{
	reusables_.push_back( reusablePtr);
}

} /* namespace pool */
