#include <iostream>

#include "automobile.h"




int main() {

	fabric::ListAutomobile automobiles = { 	fabric::Automobile::createAuto( fabric::AutoId::AudiId),
											fabric::Automobile::createAuto( fabric::AutoId::BmwId)};

	for( auto automobile: automobiles)
	{
		automobile->getInfo();
	}
	for(auto automobile: automobiles)
	{
		delete automobile;
	}
	return 0;
}
