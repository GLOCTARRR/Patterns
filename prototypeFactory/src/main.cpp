#include "model/automobileprototypefactory.h"
#include "model/automobile.h"

#include <list>

int main()
{
	automobile::AutomobilePrototypeFactory automobilePrototypeFactory = automobile::AutomobilePrototypeFactory();
	std::list<automobile::Automobile*> automobilies;
	automobilies.push_back( automobilePrototypeFactory.createAudi());
	automobilies.push_back( automobilePrototypeFactory.createBmw());

	for(auto automobile: automobilies)
	{
		automobile->info();
	}
}

