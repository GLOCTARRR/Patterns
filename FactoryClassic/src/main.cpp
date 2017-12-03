#include <iostream>

#include "bmwFactory.h"
#include "audiFactory.h"

int main() {

		fabric::BmwFactory bmwFactory = fabric::BmwFactory();
		fabric::AudiFactory audiFactory = fabric::AudiFactory();
		automobile::AutomobilesList automobiles = { bmwFactory.createInstance(),
													audiFactory.createInstance()};

		for(auto automobile: automobiles)
		{
			automobile->getInfo();
		}


	return 0;
}
