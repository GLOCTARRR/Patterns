#include "reusablepool.h"
#include "reusable.h"

#include <iostream>

int main() {

	int numberObject = 4;
	pool::ReusablePool reusablePool( numberObject);

	for( int i = 0; i < numberObject; i ++)
	{
		pool::ReusablePtr reusablePtr = reusablePool.getReusable();
		reusablePtr->getInfo( std::to_string( i));
		reusablePool.addReusable( reusablePtr);
	}

//	for( int i = 0; i < numberObject + 5; i ++)
//	{
//		pool::ReusablePtr reusablePtr = reusablePool.getReusable();
//		if( reusablePtr != nullptr)
//			reusablePtr->getInfo( std::to_string( i));
//		else
//			std::cout << "nullptr for: " << i << std::endl;
//	}

	for( int i = 0; i < numberObject + 5; i ++)
	{
		std::cout << "with addReusable"<< std::endl;
		pool::ReusablePtr reusablePtr = reusablePool.getReusable();
		if( reusablePtr != nullptr)
			reusablePtr->getInfo( std::to_string( i));
		else
			std::cout << "nullptr for: " << i << std::endl;
		reusablePool.addReusable( reusablePtr);
	}
	return 0;
}
